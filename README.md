# Cmake
## Folder structure
1. `include/` used for pure header files
2. `lib/` used for library(multiple .h and .cpp files) 

## Commom cmake functions
* `add_executable([target] [src_files])`
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Compile `srs_files` into a executable `target`
* `target_include_directories([target] [PUBLIC|PRIVATE] [include_dir_path])`
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Include headers inside `include_dir_path` into executable `target`
* `add_library([lib_name] [STATIC|DYNAMIC] [src_files])`
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Compile `src_files`(.cpp source codes) of libraries`lib_name`
* `target_link_libraries([target] [PUBLIC|PRIVATE] [lib_name])`
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Link `target` with `lib_name`. Kind of like the `-o` argument when we using g++
* `add_subdirectory(dir)`
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Link a subdirectory `dir` which has a CMakeLists.txt of its own
