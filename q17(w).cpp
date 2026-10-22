// Print all prime numbers between 1 and 100.
#include<iostream>
using namespace std;
int main (){
    int num = 2;
    
    while(num<=100){
        int i=2;
        int n=1;

        while (i<num)
        {
            if (num % i == 0) {
                n= 0;
                break;
            }
            i++;
        }
        if (n == 1) {
            printf("%d ", num);
        }

        num++;
    }

    return 0;
}

