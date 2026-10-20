//  Check whether the given number is a Perfect number. 

#include <iostream>
using namespace std;

int main() {
    int num, i = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (i < num) {
        if (num % i == 0) {
            sum = sum + i;
        }
        i++;
    }

    if (sum == num && num > 0) {
        cout << "Perfect number";
    } else {
        cout << "Not a Perfect number";
    }

    return 0;
}

