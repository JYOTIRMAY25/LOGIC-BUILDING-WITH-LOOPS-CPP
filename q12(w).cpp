// Reverse the given number and print the reversed value.
#include <iostream>
using namespace std;

int main(){
    int n;
    int reverse = 0;

    cout<<"enter the number : "<<endl;
    cin>>n;

    while(n>0){
         n=n%10;
        reverse = reverse*10 + n%10;
        n%=10;
        n++;
    }
    cout<<"revers number :"<<reverse<<endl;

}
