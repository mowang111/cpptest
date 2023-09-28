#include "pch.h"
#include "../cpptest/scalar_test.cpp"
// 测试scalar_test
TEST(SCALAR, test) {
    test();
}

int main(int argc, char** argv) {
    // 初始化 Google Test
    ::testing::InitGoogleTest(&argc, argv);

    // 运行所有的测试用例
    return RUN_ALL_TESTS();
}
