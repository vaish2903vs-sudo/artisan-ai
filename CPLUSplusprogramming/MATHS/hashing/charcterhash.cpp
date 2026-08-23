#include<bits/stdc++.h>
using namespace std;
int main(){ string n;
    cout<<"enter the string";
    cin>>n;
//hash array;PRECOMPUTE;
 int hash[26]={0};//all elements zero 
 for (int i = 0; i < n.size(); i++)
 {
    hash[n[i]-'a']+=1;
 }
 int q;//no of queries
 cin >>q ;
 while (q--)
 {
    char number;
    cin>>number;
 //fetch
 cout<<hash[number-'a']<<endl;}
}