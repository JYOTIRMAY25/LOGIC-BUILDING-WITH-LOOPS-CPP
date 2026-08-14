//Count and print the total number of digits in a given number
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int count=0;

    while (n>0)
    {
        
        count++;
        n=n/10;

    }
    cout<<count<<endl;
    return 0;
        
}
