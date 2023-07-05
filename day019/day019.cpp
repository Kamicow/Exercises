#include <iostream>

using namespace std;

int main() {

    float divider = 1;
    int  number, digitInt = 0, digitFloat = 0;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        number *= -1;

    while(1) {
        if (number / divider <= 1) {
            cout << "Before the dot, there are " << digitInt << " digit(s)\n";
            break;
        }
        digitInt += 1;
        divider *= 10;
    }

    while(1) {
        if (number % 1 == 0) {
            cout << "After the dot, there are " << digitFloat << " digit(s)\n";
            break;
        }
        number *= 10;
        digitFloat += 1;

    }
}