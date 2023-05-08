#include "Multiply.cpp"
#include <gtest/gtest.h>

TEST(MultiplyTest, PositiveNumbers) {
    EXPECT_EQ(multiply(2, 3), 6);
    EXPECT_EQ(multiply(4, 5), 20);
    EXPECT_EQ(multiply(6, 7), 42);
}

TEST(MultiplyTest, NegativeNumbers) {
    EXPECT_EQ(multiply(-2, 3), -6);
    EXPECT_EQ(multiply(4, -5), -20);
    EXPECT_EQ(multiply(-6, -7), 42);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
