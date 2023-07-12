#include <gtest/gtest.h>

TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(1, 1);
}

TEST(SquareRootTest, PositiveNos) {
    ASSERT_EQ(1, 1);
}

TEST(SomeRandomtest, NegativeNos) {
    ASSERT_EQ(1, 1);
}

TEST(SomeRandomTest, PositiveNos) {
    ASSERT_EQ(1, 1);
}


 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
