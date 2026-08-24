//Check whether the given number is a Perfect number.
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
    {
        cout << "The number is a Perfect number" << endl;
    }
    else
    {
        cout << "The number is not a Perfect number" << endl;
    }

    return 0;
}
