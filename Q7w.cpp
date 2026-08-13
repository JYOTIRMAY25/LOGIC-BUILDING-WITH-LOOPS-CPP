// Calculate the sum of all even numbers from 1 up to n.
    #include<iostream>
    using namespace std;
    int main(){
        int n ,i=1;
        cout<<"enter the number of the n :"<<endl;
        cin>>n;
        int sum=0;
        while (i<=n)
        {
          
            if (i%2==0)
            {
                
               sum=i+sum;
            }
            i++;
                
             
        }
        cout<<sum<<endl;
        return 0;      
        
    }
