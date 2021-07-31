# Cmake
## Folder structure
1. `include/` used for pure header files
2. `lib/` used for library(multiple .h and .cpp files) 

## Commom cmake functions
* `add_executable([target] [src_files])`<br />
Compile `srs_files` into a executable `target`
* `target_include_directories([target] [PUBLIC|PRIVATE] [include_dir_path])`<br />
Include headers inside `include_dir_path` into executable `target`<br />
* `add_library([lib_name] [STATIC|DYNAMIC] [src_files])`
Compile `src_files`(.cpp source codes) of libraries`lib_name`<br />
* `target_link_libraries([target] [PUBLIC|PRIVATE] [lib_name])`
Link `target` with `lib_name`. Kind of like the `-o` argument when we using g++
* `add_subdirectory(dir)`<br />
Link a subdirectory `dir` which has a CMakeLists.txt of its own
