// Calculate and print the factorial of a given number. 
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the number :"<<endl;
cin>>n;
int i=1;
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
