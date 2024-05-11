#include <iostream>

bool hasUniqueDigits(int number) {
    bool digits[10] = { false };

    while (number > 0) {
        int digit = number % 10;
        if (digits[digit]) {
            return false;
        }
        digits[digit] = true;
        number /= 10;
    }

    return true;
}

int main() {
    int count = 0;

    for (int i = 100; i <= 999; ++i) {
        if (hasUniqueDigits(i)) {
            count++;
        }
    }

    std::cout << "Number of integers in the range from 100 to 999 that have all different digits: " << count << std::endl;

    return 0;
}
