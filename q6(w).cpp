// calculate and print the sum of the first n nature numbers

#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    int sum=0;
    cout<<"enter the vlaue of n"<<endl;
    cin>>n;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"the sum is = "<<sum<<endl;

    return 0;

}
