#include<iostream>
using namespace std;
int main(){
int n;cout<<"enter the number";
    cin>>n;
    for (int i = 1; i <=n; i++){for (int j = 1; j<=n-i; j++)
        {
            cout<<" ";
        }
         for (int v = 1; v<=2*i-1; v++)
        {
            cout<<"*";
        }
         for (int t= 1; t<=n-i; t++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
for (int b = 1; b <=n; b++)
    {for (int c =1 ; c<=b-1; c++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j<=2*n -(2*b-1) ; j++)
        {
            cout<<"*";
        }
        
        for (int v =1; v<=b-1; v++)
        {
            cout<<" ";
        }cout<<endl;}
    }