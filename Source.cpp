#include <iostream>

bool hasTwoSameDigits(int number) {
    int digitCount[10] = { 0 };

    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        if (digitCount[i] >= 2) {
            return true;
        }
    }

    return false;
}

int main() {
    int count = 0;

    for (int i = 100; i <= 999; ++i) {
        if (hasTwoSameDigits(i)) {
            count++;
        }
    }

    std::cout << "Number of integers in the range from 100 to 999 that have two identical digits: " << count << std::endl;

    return 0;
}
