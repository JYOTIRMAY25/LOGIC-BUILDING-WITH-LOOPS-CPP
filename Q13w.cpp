// Check whether the given number is a palindrome
#include <iostream>
using namespace std;
int main() {
  int n, digit, reverse = 0, org;
  cout << "enter the number :" << endl;
  cin >> n;
  org = n;

  while (n > 0) {
    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
  }

  if (org == reverse) {
    cout << "the number is palindrome" << endl;
  } else {
    cout << "the number is not palindromic" << endl;
  }

  return 0;
}
