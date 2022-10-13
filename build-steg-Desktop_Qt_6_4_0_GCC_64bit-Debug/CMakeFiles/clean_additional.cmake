# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/steg_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/steg_autogen.dir/ParseCache.txt"
  "steg_autogen"
  )
endif()
