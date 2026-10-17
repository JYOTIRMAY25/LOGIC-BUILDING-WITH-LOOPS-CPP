// Check whether the given number is a palindrome
#include <iostream>
using namespace std;

int main() {
    int n, original, remainder, reversed = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed) {
        cout << "Palindrome number";
    } else {
        cout << "Not a palindrome number";
    }

    return 0;
}
