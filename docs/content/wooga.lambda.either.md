# Working with Either

> "The **Either** type represents values with two possibilities: a value of type **Either<'L,'R>** is either **Left<'L>** or **Right<'R>**.
> The **Either** type is sometimes used to represent a value which is either correct or an error;
> by convention, **Left** is used to hold an error value and **Right** holds a correct value"
> *- Haskell documentation*

## *Either* instance

Create an **Either** by injecting a value into either case with **Either.Left<'L,'R>('L)** or **Either.Right<'L,'R>('R)**.

    [lang=cs]
    Either<int, string> left = Either.Left<int, string>(2);
    Either<int, string> right = Either.Right<int, string>("rrr");

Use the **FromEither<'L,'R,'T>('L->'T,'R->'T)** function to extract the value from either side.

    [lang=cs]
    var leftV = left.FromEither(l => l.ToString(), r => r); // "2"
    var rightV = right.FromEither(l => l.ToString(), r => r); // "rrr"

Check out the [API Reference](reference/wooga-lambda-control-monad-either.html) for more information.

## *Exception* and *error*-handling

The following snippet depicts a three step process to **load**, **validate** and **launch** a saved game.
Each of these steps can potentially fail and raise an **Exception** that needs to be caught.

    [lang=cs]
    void StartGame(byte[] saveGame)
    {
        if(ValidateSaveGame(saveGame))
        {
            Debug.WriteLine("Play it!! I could crash here too...");
        }
        else
        {
            throw new Exception("corrupt save game");
        }
    }

    bool ValidateSaveGame(byte[] saveGame)
    {
        return saveGame.Length > 8;
    }

    byte[] LoadSaveGame(string file)
    {
        return File.ReadAllBytes(file);
    }

    try
    {
        StartGame(LoadSaveGame("x.y"));
    }
    catch (Exception e)
    {
        throw e; // Which exceptions will I catch here?!?
    }

## Composing *Either*

Using the monadic bind function of **Either** we can compose these steps together while preserving granular information like individual error messages.

    [lang=cs]
    Either<string, Unit> StartGame(byte[] saveGame)
    {
        return Either.Try(e=> "start failed: "+ e.Message,
                         ()=> Unit.Default);
    }

    Either<string, byte[]> ValidateSaveGame(byte[] saveGame)
    {
        return Either.When(()=> saveGame.Length>8,
                           ()=> "validation failed",
                           ()=> saveGame);
    }

    Either<string, byte[]> LoadSaveGame(string file)
    {
        return Either.Try(e=> "load failed: "+ e.Message,
                         ()=> File.ReadAllBytes(file));
    }

    var launch = LoadSaveGame("x.y")
                 .Bind(ValidateSaveGame)
                 .Bind(StartGame)
                 .FromEither(s=>"e: "+s,
                             s=>"all good"); // p: FileNotFoundException
