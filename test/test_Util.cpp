#include "gtest/gtest.h"
#include "Util.hpp"

// Just an example test to verify that the test framework does its job
TEST(UtilTest, exampleTest) {
  // given
  int num = 5;

  // when
  auto foonum = Util::foo(num);

  // then
  EXPECT_EQ(foonum, 15);
}
