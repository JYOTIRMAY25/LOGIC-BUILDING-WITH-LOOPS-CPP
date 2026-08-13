// Calculate and print the factorial of a given number
#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"enter the factorial"<<endl;
    cin>>n;
    int fact=1;
    while (i<=n)
    {
        fact=i*fact;
        cout<<i<<endl;
        i++;
    }
    cout<<fact<<endl;
    return 0;
}
