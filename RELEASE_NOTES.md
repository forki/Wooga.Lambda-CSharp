#### 0.7.0 - Aug 23 2015
* [Data] Removed Tuple & List
* [Data] Substance provides ported datastructures from corefx 
* [Storage] stream based API for filesystem access
* [Storage] locations in filesystem are stringbased to be interoperable with .net

#### 0.6.8 - September 2 2015
* [Control] Producer.ConsumeMany is now Produer.Map
* [Control] Async consumer returns Maybe<TConsumed>

#### 0.6.6 - Aug 13 2015
* [Control] Async producer/consumer consume many accumulates list of products

#### 0.6.5 - Aug 13 2015
* [Control] Async producer/consumer pattern types added

#### 0.6.4 - Aug 13 2015
* [Control] Async computations are run on ThreadPool by default

#### 0.6.3 - July 24 2015
* [Control] Custom threading implementations for Async
* [Control] Error handling of Async computations

#### 0.6.2 - July 24 2015
* [Storage] Fixes LocalFileSystem where Files ended up as Dirs and absoulte paths weren't concatenated properly

#### 0.6.1 - July 24 2015
* [Storage] Fixes LocalFileSystem where Unity3D misses enum-value of RegexOption.Compiled

#### 0.6.0 - July 24 2015
* [Storage] Location type instead of FilePath & DirPath
* [Storage] Local- & VirtualFileSystem
* [Storage] Atomic write & recovery operations for files
* [Network] HTTPClient gets a parameter to add custom headers

#### 0.5.0 - May 11  2015
* Maybe & Either types are now structs and cause no memory overhead anymore
* Changes in APIs of Maybe & Either

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
