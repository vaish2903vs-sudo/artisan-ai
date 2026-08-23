#include<bits/stdc++.h>
using namespace std ;
void prime(int n){ 
    int count=0;//no of divisors ;
    for (int i = 1; i <=n; i++)
    {   
        if (n%i==0)
        { cout<<i<<",";
           count++;
        }
    }  }int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    prime(n);
    return 0;}