#include <iostream>

int scalar_test() {
    int value;
    std::cout << "Please enter an integer: ";
    std::cin >> value;

    if (!std::cin) {  // �����ʧ�ܣ�ִ�д˿�
        std::cerr << "That wasn't an integer!" << std::endl;
        std::cin.clear();  // ��������־
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ������뻺����
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
