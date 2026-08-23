#include<bits/stdc++.h>
using namespace std;
int secondlargest(vector<int>&arr,int n){
    int largest=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
     int secondlargest = -1;
     for (int i = 0; i < n; i++)
     {  if (arr[i]>secondlargest && arr[i]!=largest)
       {
         secondlargest=arr[i];
       }}
       return secondlargest;
    
}int main (){
     int n;cout<<"enter size of array";
    cin>>n;
    vector<int>arr(n);cout<<"enter elemnts of array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"secondlargest is "<<secondlargest(arr,n);
}