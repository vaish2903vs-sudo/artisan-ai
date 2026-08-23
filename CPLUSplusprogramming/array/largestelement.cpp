#include<bits/stdc++.h>
using namespace std;
 int nums(vector<int>&arr,int n){
  sort(arr.begin(),arr.end());
}
int main(){
    int n;cout<<"enter size of array";
    cin>>n;
    vector<int>arr(n);cout<<"enter elemnts of array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    nums(arr,n);
    cout<<arr[n-1];
}