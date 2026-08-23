#include<bits/stdc++.h>
using namespace std;
int main(){ int n;
    cout<<"number";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
// precompute using map;
map<int,int>mpp;
for (int  i = 0; i < n; i++)
{
    mpp[arr[i]]+=1;
}
for ( auto it : mpp)
{
  cout<<it.first<<"->"<<it.second<<endl;//iterating in the map

}
 int q;//no of queries
 cin >>q ;
 while (q--)
 {
    int number;
    cin>>number;
 //fetch
 cout<<mpp[number]<<endl;}
