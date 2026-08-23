#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n";
cin>>n;
if (n==0)
    cout<<0<<endl;
    else if (n==1)
    {
        cout <<0<<" "<<1<<endl;
    }
    else{
        int fib[n+1];//array to store fibonacci series
        fib[0]=0;
        fib[1]=1;
        for (int i = 2; i <= n; i++)//here we give the values 
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
        for (int i = 0; i <=n; i++)//now this will print the value we tored in the array

        {
            cout<<fib[i]<<" ";
        }
        
    }

}

