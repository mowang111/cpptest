#include <iostream>

//递归函数，不断调用自身消耗堆栈空间
void recursiveFunction()
{
    char buffer[1024]; // 每次递归分配 1024 字节的局部变量，这会导致堆栈空间的消耗
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
