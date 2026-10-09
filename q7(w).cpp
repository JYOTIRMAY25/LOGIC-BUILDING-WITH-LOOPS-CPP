//  Calculate the sum of all even numbers from 1 up to n.
#include<iostream>
using namespace std;

int main(){

    int i =1;
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int sum=0;
     while (i<=n)
     {
        if (i%2==0)
        {
            sum=sum +i;

        }
        i++;

    }
    cout<<"The sum of all even numbers from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;

}
