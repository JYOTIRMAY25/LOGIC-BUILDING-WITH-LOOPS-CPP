// print all even number form 1 to 100

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i<= 100)
    {
        if (i%2==0)
        {
            cout<<" it is even number "<<i<<endl;
        }
        i++;
    }
    return 0;
}
