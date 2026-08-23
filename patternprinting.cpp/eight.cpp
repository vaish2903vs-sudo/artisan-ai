#include<iostream>
using namespace std;
int main(){
int n;cout<<"enter the number";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int c =1 ; c<=i ; c++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j<=2*n -(2*i-1) ; j++)
        {
            cout<<"*";
        }
        
        for (int v =1; v<=i; v++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}