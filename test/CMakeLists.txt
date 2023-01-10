# Now simply link against gtest or gtest_main as needed. Eg
add_executable(io_test io_test.cc)
target_link_libraries(io_test gtest_main)
add_test(NAME io_test COMMAND io_test)