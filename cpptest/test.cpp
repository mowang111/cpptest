#include <iostream>

//�ݹ麯�������ϵ����������Ķ�ջ�ռ�
void recursiveFunction()
{
    char buffer[1024]; // ÿ�εݹ���� 1024 �ֽڵľֲ���������ᵼ�¶�ջ�ռ������
    recursiveFunction();
}

void test()
{
    try
    {
        recursiveFunction();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}
