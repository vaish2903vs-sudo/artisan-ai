#include<iostream>
using namespace std;
int main(){
int n;cout<<"enter the number";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=n-i; j++)
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
}