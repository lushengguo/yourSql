project(yourSql)

cmake_minimum_required(VERSION 3.22)

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

include_directories("./")

add_subdirectory(disk)
add_subdirectory(memory)
add_subdirectory(sqlParser)
add_subdirectory(test)
add_subdirectory(util)