//Print the multiplication table of a given number from n x 1 to n x 10.
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter the n value :"<<endl;
    cin>>n;
    while (i<=10)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        
        i++;
    }
    return 0;

    
}
