#include<bits/stdc++.h>
using namespace std;
bool checksort(int n ,vector<int>&arr){
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>=arr[i-1]){}
        else { cout<<"not sorted";
        return false;}
    }
    cout <<"sorted";
    return true;
} int main (){
     int n;cout<<"enter size of array";
    cin>>n;
    vector<int>arr(n);cout<<"enter elemnts of array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    checksort(n,arr);
}
