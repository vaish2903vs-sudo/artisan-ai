#include<bits/stdc++.h>
using namespace std;
int main(){ int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
//hash array;
 int hash[13]={0};//all elements zero 
 for (int i = 0; i < n; i++)
 {
    hash[arr[i]]+=1;
 }//precompute
 int q;//no of queries
 cin >>q ;
 while (q--)
 {
    int number;
    cin>>number;
 //fetch
 cout<<hash[number]<<endl;}
}