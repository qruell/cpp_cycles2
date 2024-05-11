#include <iostream>
#include <cmath>

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int A;
    std::cout << "Enter an integer A: ";
    std::cin >> A;

    int sum = sumOfDigits(abs(A));

    int sumCube = sum * sum * sum;

    if (sumCube == A * A) {
        std::cout << "The cube of the sum of the digits of " << A << " equals " << A << " squared." << std::endl;
    }
    else {
        std::cout << "The cube of the sum of the digits of " << A << " does not equal " << A << " squared." << std::endl;
    }

    return 0;
}
