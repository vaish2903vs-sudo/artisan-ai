#include<bits/stdc++.h>
using namespace std;
void pattern12(int n){
    int spaces = 2*(n-1);
     {for (int i = 1; i <= n; i++)
     {//leftnumbers
        for (int j = 1; j<=i;j++)
        {
            cout<<j;
         } 
         //spaces
    for (int j = 1; j<=spaces;j++)
        {
            cout<<" ";
} 
     //rightspaces
        for (int j = i; 1<=j;j--)
        {
            cout<<j;}
             cout<<endl;
             spaces-=2;
}}
}
int main (){
    int n;
    cout<<"enter the number";
    cin>>n;
    pattern12(n);
}
   