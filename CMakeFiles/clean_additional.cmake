# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "MinSizeRel")
  file(REMOVE_RECURSE
  "CMakeFiles/radarScanLocalConsole_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/radarScanLocalConsole_autogen.dir/ParseCache.txt"
  "radarScanLocalConsole_autogen"
  )
endif()
