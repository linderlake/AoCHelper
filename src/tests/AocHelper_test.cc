#include "../AoCHelper.h"

#include <gtest/gtest.h>

#include "../AoCHelper.h"

TEST(AoCHelperTest, TestConstructor) {
  AoCHelper helper("2022", "1");
  EXPECT_TRUE(true);
}

// main
int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}