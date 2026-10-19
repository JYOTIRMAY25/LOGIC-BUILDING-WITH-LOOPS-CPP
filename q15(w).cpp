// Check whether the given number is an Armstrong number.

#include <iostream>
using namespace std;

int main() {
    int num, original, temp, digit;
    int sum = 0, count = 0, power;

    cout<< "Enter a number: ";
    cin>> num;

    original = num;
    temp = num;

    // Count digits using while loop
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate Armstrong sum using while loops
    while (temp > 0) {
        digit = temp % 10;
        power = 1;

        int i = 0;
        while (i < count) {
            power = power * digit;
            i++;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original) {
        cout << "Armstrong number";
    } else {
        cout << "Not an Armstrong number";
    }

    return 0;
}

