#include "gtest/gtest.h"
#include "mylib/lib.cpp"



TEST(MINMAX, VALIDATION) {
  EXPECT_EQ(minValue(0, 7), 0);
  EXPECT_EQ(minValue(10, 10), 10);
  EXPECT_EQ(minValue(-1, 3), -1);
  EXPECT_EQ(minValue(-3, -10), -10);

  EXPECT_EQ(maxValue(0, 7), 7);
  EXPECT_EQ(maxValue(10, 10), 10);
  EXPECT_EQ(maxValue(-1, 3), 3);
  EXPECT_EQ(maxValue(-3, -10), -3);
}



int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}