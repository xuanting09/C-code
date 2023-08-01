#include <iostream>

int main() {
    int num;
    std::cin >> num;
    if (num >= 90 && num <= 100) {
        std::cout << "A" << std::endl;
    }else if (num >= 80 && num <= 89) {
        std::cout << "B" << std::endl;
    }else if (num >= 70 && num <= 79) {
        std::cout << "C" << std::endl;
    }else if (num >= 60 && num <= 69) {
        std::cout << "D" << std::endl;
    } else {
        std::cout << "E" << std::endl;
    }
    return 0;
}