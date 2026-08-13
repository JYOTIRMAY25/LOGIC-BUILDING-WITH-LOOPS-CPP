// Find and print the product of all digits of a given number
#include<iostream>
using namespace std;
int main(){
  int n, digit;
  cout<<"enter the number "<<endl;
  cin>>n;
  int product=1;
  while (n>0)
  {
    digit = n % 10;
    product=digit*product;
    n = n / 10;
    
  }
  cout<<product<<endl;
  return 0;
  
} 
