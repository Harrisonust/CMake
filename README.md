# Cmake notes

## Folder structure
* `bin/` a folder that contains the compiled .DLL file or (sometimes) a .lib or the executable application or .exe file — the “binary”
* `include/` a folder that contains the publicly distributed .h (header files) for a library to be included in another application, required to use a library or DLL, normally put **pure .h files** in
* `lib/` a folder that contains **statically linkable**, **precompiled code** and is part of a library, library-builders mostly code thier librarise in this folder
* `doc/` all those nifty **manuals** programmers hate to write, or generated ones from the output of a source documentation utility like Doxygen, or a README file, or the .man files for Linux “man” command, or an offline website so you would see .html files
* `build/` a folder that is sometimes there for holding onto **build scripts**, half-built code, other stuff related to the compilation process, usually its generated by a utility or the compiler. There are other names for this folder on each platform
* `src/` this is where the source code is, **users edit this stuff most frequently** (probably), and it may have sub-folders
* `data/` some applications come with “sample data” or “test data” that usually sits in here and is accessed by the application in the bin/ folder
* `examples/` some libraries come with a set of applications that test out various “units” of the “system” and also demonstrate usage
* `contrib/` this used to mean “user-contributed snippets” or source code given to the primary author or authors for use or to extend an open-source project [3](or even a closed source one), though the “contrib” idea hit its popularity peak a long time ago, in a time when not everyone had a source versioning control utility like git
<br />
reference: https://www.linkedin.com/pulse/what-general-c-project-structure-like-herbert-elwood-gilliland-iii

## Commom cmake functions
### Setting
* `cmake_minuim_required(VERSION [X.x])`<br />
Set the cmake minimun required version, compile will aborted for cmake lower than this specified version
* `set([var] [value])`<br />
Set `var` = `value`
* `project([project_name] [VERSION X.x])`<br />
CMAKE_PROJECT_NAME = `project_name`<br />
CMAKE_PROJECT_VERSION = `X.x`<br />
CMAKE_PROJECT_VERSION_MAJOR = `X`<br />
CMAKE_PROJECT_VERSION_MINOR = `x`<br />

### Compiling
* `add_executable([target] [src_files])`<br />
Compile `src_files` into a executable `target`
* `target_include_directories([target] [PUBLIC|PRIVATE] [include_dir_path])`<br />
Include headers inside `include_dir_path` into executable `target`
* `add_library([target] [STATIC|SHARED|MODULE] [src_files])`<br />
Compile `src_files`(.cpp source codes) to libraries`target`
    * `STATIC`: statically linking(linking at compile time)
    * `SHARED`: dynamically linking(linking at running time)
    * `MODULE`: ??
* `target_link_libraries([target] [PUBLIC|PRIVATE] [lib])`<br />
Link `target` with `lib`. Kind of like the `-o` argument when we using g++
* `add_subdirectory(dir)`<br />
Link a subdirectory `dir` which has a CMakeLists.txt of its own

## Commom CMake variable list
* CMAKE_SOURCE_DIR
The root source directory

* CMAKE_CURRENT_SOURCE_DIR
The current source directory if using sub-projects and directories.

* PROJECT_SOURCE_DIR
The source directory of the current cmake project.

* CMAKE_BINARY_DIR
The root binary / build directory. This is the directory where you ran the cmake command.

* CMAKE_CURRENT_BINARY_DIR
The build directory you are currently in.

* PROJECT_BINARY_DIR
The build directory for the current project.

## Check platform
* `UNIX` : for all UNIX-like OS's, including Apple OS X and CygWin
* `WIN32` : for Windows. Prior to 2.8.4 this included CygWin
* `APPLE` : for Apple systems. Note this does not imply the system is Mac OSX, only that APPLE is #defined in C/C++ header files.
* `MINGW` : is TRUE when using the MinGW compiler in Windows
* `MSYS` : is TRUE when using the MSYS developer environment in Windows
* `CYGWIN` : for Windows when using the CygWin version of cmake