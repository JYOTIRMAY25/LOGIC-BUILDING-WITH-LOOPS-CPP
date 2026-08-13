//Calculate and print the sum of the first n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"enter the number of n nature number"<<endl;
    cin>>n;
    int sum=0;
    while (i<=n)
    {
        sum = i+sum;
        i++;
        cout<<sum<<endl;
        
    }
    
    return 0;
    
}
