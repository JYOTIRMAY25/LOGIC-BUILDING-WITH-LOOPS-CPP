//  Check whether the given number is a prime number.
#include <iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 2) {
        prime = false;
    }

    while (i < num) {
        if (num % i == 0) {
            prime = false;
            break;
        }
        i++;
    }

    if (prime) {
        cout << "Prime number";
    } else {
        cout << "Not a prime number";
    }

    return 0;
}
