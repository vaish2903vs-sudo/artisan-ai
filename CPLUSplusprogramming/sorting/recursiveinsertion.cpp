#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int i , int n){
    //BASE CASE
    if (i==n)
    {
    return;
    }
    int j=i;
    while (j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);j--;
    }
    //for next index
    insertion_sort(arr,i+1,n);
}
int main(){
    int n;cout<<"size of array ";
    cin>>n;cout<<"enter elements of array";int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];cout<<" ";
    } cout<<endl;
    insertion_sort(arr,1,n);cout<<"the sorted array";//because in insertion first is considered already sorted
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    

}