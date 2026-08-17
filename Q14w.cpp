// find and print the sum of digits of the given number
#include<iostream>
using namespace std;
int  main(){
    int n, sum=0, digit;
    cout<<"enter the digits :"<<endl;
    cin>>n;

    while (n>0) {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout <<"the sum of the digits are :"<< sum<<endl;
    
    return 0;
}
