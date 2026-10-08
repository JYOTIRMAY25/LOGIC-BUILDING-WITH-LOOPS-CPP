//print the multiplication table of a given number from n × 1 to n x 10

#include<iostream> 
using namespace std;

int main(){

    int n,i=1;
    cout<<"enter the number "<<endl;
    cin>>n;
    while (i<=10)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }
    return 0;
}
