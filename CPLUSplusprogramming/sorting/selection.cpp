#include<bits/stdc++.h>
using namespace std;
int main(){int n;cout<<"enter size of array";
    cin>>n;
    int arr[n];cout<<endl;
    cout<<"element of array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <= n-2; i++)
    {
        int min=i;
        for (int j= i; j <= n-1 ; j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[min],arr[i]);
    } cout<<"sorted array";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}