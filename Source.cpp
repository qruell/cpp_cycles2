#include <iostream>

int main() {
    int number1, number2;
    std::cout << "Enter the first integer: ";
    std::cin >> number1;
    std::cout << "Enter the second integer: ";
    std::cin >> number2;

    std::cout << "Integers that both " << number1 << " and " << number2 << " divide without remainder: ";

    int minNumber = (number1 < number2) ? number1 : number2;

    for (int i = 1; i <= minNumber; ++i) {
        if (number1 % i == 0 && number2 % i == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
