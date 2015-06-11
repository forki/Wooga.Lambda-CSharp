#### 0.4.1 - May 11  2015
* Wooga.Lambda.FileSystem.Api removing some Logs from LocalFileSystem

#### 0.4.0 - May 11  2015
* Wooga.Lambda.FileSystem.Api is now error/exception agnostic

#### 0.3.7 - May 9 2015
* Structs constructors of File, FilePath, Dir & DirPath are public

#### 0.3.6 - May 9 2015
* Path creation in LocalFileSystem does respect root directories
* Adds method to create file and dir path to FileSystem.Api
* Adds many generic type arguments - the Unity Editor can't infer them

#### 0.3.5 - May 8 2015
* Uses Pattern.Match in Parser library
* Additional common parser combinator (takeLeft/Right/Both...)
* Adds DirPath & FilePath types to Storage library

#### 0.3.4 - April 26 2015
* Small bugfix in Async.Parallel

#### 0.3.3 - April 26 2015
* Fighting Fake :(

#### 0.3.2 - April 26 2015
* Fixed NuGet packages and github releases

#### 0.3.1 - April 26 2015
* Fixed NuGet packages and github releases

#### 0.3.0 - April 26 2015
* Big cleanup many things removed, many added...
* No more IO monad, Async does the job better
* Refactored network and filesystem libraries
* added a pattern matching 'monad'
* lots of documentation

#### 0.2.0 - March 19 2015
* Splits monadic functions and their result types in different files.
* Adds Wooga.Lambda.Log project
* Adds Wooga.Lambda.FileSystem project
* Adds Wooga.Lambda.Network project

#### 0.1.0 - March 19 2015
* Initial release
