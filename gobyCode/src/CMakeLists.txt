option(build_moos "Build MOOS related examples" OFF)

if(build_moos)
  find_package(MOOS 10 REQUIRED)
  find_package(GOBY 3.0 REQUIRED moos)
endif()

add_subdirectory(transmitter)
add_subdirectory(lib)
add_subdirectory(receiver)
