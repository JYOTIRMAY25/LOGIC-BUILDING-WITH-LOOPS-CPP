// Count and print the total number of digits in a given number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int n;
    int digits = 0;

    cout << "Enter the number: ";
    cin >> n;

    if (n == 0) {
        digits++;
    } else {
        while (n != 0) {
            n /= 10;
            digits++;
        }
    }

    cout << "Total number of digits: " << digits << endl;
    return 0;
}
