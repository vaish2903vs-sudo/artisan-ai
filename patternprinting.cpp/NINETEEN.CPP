#include<iostream>
using namespace std;
void pattern19(int n){
  {   int space=0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=(n-i+1); j++)
        {
            cout<<"*";
        }
        for (int j = 0; j<space; j++)
        {
            cout<<" ";
            
        }
        for (int j = 1; j<=(n-i+1); j++)
        {
            cout<<"*";
        } cout<<endl;
         space+=2;}
         }{
             int space=(2*n-2);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=(i); j++)
        {
            cout<<"*";
        }
        for (int j = 0; j<space; j++)
        {
            cout<<" ";
            
        }
        for (int j = 1; j<=(i); j++)
        {
            cout<<"*";
        } cout<<endl;
         space-=2;}
         }
         }
    int main(){
        int n;
        cout<<"enter the number =";
        cin>>n;
        pattern19(n);
    }