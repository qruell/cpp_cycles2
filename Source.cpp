#include <iostream>

int main() {
    int A;
    std::cout << "Enter an integer A: ";
    std::cin >> A;

    std::cout << "Integers B such that A is divisible by B*B but not divisible by B*B*B:\n";

    for (int B = 1; B * B <= A; ++B) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            std::cout << B << std::endl;
        }
    }

    return 0;
}
