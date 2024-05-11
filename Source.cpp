#include <iostream>
#include <string>

int main() {
    long long number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::string numStr = std::to_string(number);
    std::string resultStr = "";

    for (char digit : numStr) {
        if (digit != '3' && digit != '6') {
            resultStr += digit;
        }
    }

    long long result = std::stoll(resultStr);
    std::cout << "Number after removing digits 3 and 6: " << result << std::endl;

    return 0;
}
