// find and print the product of all digits of a given number

#include<iostream>
using namespace std;

int main(){
    int n, digit;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int pro=1;

    while (n>0)
    {
        digit=n%10;
        pro=digit*pro;
        n=n/10;
    }
    cout<<"Product of all digits is : "<<pro<<endl;
    return 0;
    
    
}
