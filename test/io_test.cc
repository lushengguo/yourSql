#include "util/io.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(io, open) {
  File file("./io_test.cc");
  std::cout << "########################### " << file.is_opened() << std::endl;
  //   EXPECT_TRUE(file.is_opened());
}

TEST(io, do_nothing) { EXPECT_TRUE(true); }