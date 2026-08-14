//revesed  the given number and reversed the given value
#include<iostream>
using namespace std;
int main(){
    int n,digit;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int reverse=0;

    while (n>0)
    {
        
        digit=n%10;
        reverse = reverse * 10 + digit;
        
        n=n/10;
      

    }
      
    cout<<reverse<<endl;

    return 0;

}
