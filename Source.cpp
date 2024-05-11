#include <iostream>

using namespace std;

int main() {
    double amount;
    int choice;
    double usd_to_uah = 39.58;
    double eur_to_uah = 42.70;

    cout << "Currency Converter\n";
    cout << "1. UAH to USD\n";
    cout << "2. USD to UAH\n";
    cout << "3. UAH to EUR\n";
    cout << "4. EUR to UAH\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter amount in UAH: ";
        cin >> amount;
        cout << "Equivalent amount in USD: $" << amount / usd_to_uah << endl;
        break;
    case 2:
        cout << "Enter amount in USD: $";
        cin >> amount;
        cout << "Equivalent amount in UAH: " << amount * usd_to_uah << " UAH" << endl;
        break;
    case 3:
        cout << "Enter amount in UAH: ";
        cin >> amount;
        cout << "Equivalent amount in EUR: ˆ" << amount / eur_to_uah << endl;
        break;
    case 4:
        cout << "Enter amount in EUR: ˆ";
        cin >> amount;
        cout << "Equivalent amount in UAH: " << amount * eur_to_uah << " UAH" << endl;
        break;
    default:
        cout << "Invalid choice. Please choose between 1 and 4." << endl;
    }

    return 0;
}
