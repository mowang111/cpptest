#include "pch.h"
#include "../cpptest/test.cpp"
// ����һ������������Test Case��
TEST(MyTest, test) {
    test();
}

int main(int argc, char** argv) {
    // ��ʼ�� Google Test
    ::testing::InitGoogleTest(&argc, argv);

    // �������еĲ�������
    return RUN_ALL_TESTS();
}
