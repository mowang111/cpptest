#include "pch.h"
#include "../cpptest/test.cpp"
// 定义一个测试用例（Test Case）
TEST(MyTest, test) {
    test();
}

int main(int argc, char** argv) {
    // 初始化 Google Test
    ::testing::InitGoogleTest(&argc, argv);

    // 运行所有的测试用例
    return RUN_ALL_TESTS();
}
