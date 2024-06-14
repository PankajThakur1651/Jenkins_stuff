#include <gtest/gtest.h>

TEST(Equality_test, are_equals) {
    ASSERT_EQ(1, 1);
}

TEST(Equality_test, are_not_equals) {
    ASSERT_NE(1, 3);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
