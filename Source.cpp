#include <iostream>

int main() {
    int number;
    std::cout << "Enter any integer: ";
    std::cin >> number;

    std::cout << "Number after removing digits 3 and 6: ";

    int remainingNumber = 0;
    int multiplier = 1;

    while (number != 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            remainingNumber += digit * multiplier;
            multiplier *= 10;
        }
        number /= 10;
    }

    if (remainingNumber == 0) {
        std::cout << "0";
    }
    else {
        std::cout << remainingNumber;
    }

    std::cout << std::endl;

    return 0;
}
