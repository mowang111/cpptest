#include <iostream>

int scalar_test() {
    int value;
    std::cout << "Please enter an integer: ";
    std::cin >> value;

    if (!std::cin) {  // 如果流失败，执行此块
        std::cerr << "That wasn't an integer!" << std::endl;
        std::cin.clear();  // 清除错误标志
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // 清空输入缓冲区
    }
    else {
        std::cout << "You entered: " << value << std::endl;
    }
    return 0;
}

int main() {
    scalar_test();
    return 0;
}
