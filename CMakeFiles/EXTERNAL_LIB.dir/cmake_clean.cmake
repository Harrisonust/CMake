file(REMOVE_RECURSE
  "libEXTERNAL_LIB.a"
  "libEXTERNAL_LIB.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/EXTERNAL_LIB.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
