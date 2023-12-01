cmake_minimum_required(VERSION 3.18)

set(CMAKE_TOOLCHAIN_FILE /usr/local/vcpkg/scripts/buildsystems/vcpkg.cmake)

# set the project name
project(AoCHelper)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set(CMAKE_FIND_DEBUG_MODE TRUE)


# compiler flags
add_compile_options(-O2)
add_compile_options(-Wall)
add_compile_options(-Wextra)

# find Google Test
find_package(GTest CONFIG REQUIRED)

# find curlpp packages
find_package(unofficial-curlpp CONFIG REQUIRED)

# add the library
add_library(AoCHelper src/AoCHelper.h src/AoCHelper.cc src/helper_functions.h src/helper_functions.cc)

# link the libraries
target_link_libraries(AoCHelper PRIVATE unofficial::curlpp::curlpp)

# enable testing
enable_testing()

# add a subdirectory for the tests
add_subdirectory(src/tests)