#include "pch.h"
#include "../cpptest/scalar_test.cpp"
// ����scalar_test
TEST(SCALAR, test) {
    test();
}

int main(int argc, char** argv) {
    // ��ʼ�� Google Test
    ::testing::InitGoogleTest(&argc, argv);

    // �������еĲ�������
    return RUN_ALL_TESTS();
}
