#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low, int high){
    int i=low;
    int pivot=arr[low];
    int j=high;
    while (i<j)
    {
        while (arr[i]<=pivot &&i<=high-1)
        {
            i++;
        }
        while (arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j) {swap (arr[i],arr[j]);
            i++;}
    } swap(arr[low],arr[j]);
            return j;}
    void quick_sort(int arr[], int low, int high){
        if (low<high)
        {
            int p=partition(arr,low,high);
            quick_sort(arr,low,p-1);
            quick_sort(arr,p+1,high);
        }
        
    } 

int main(){
    int n;cout<<"size of array ";
    cin>>n;cout<<"enter elements of array";int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];cout<<" ";
    } cout<<endl;
    quick_sort(arr,0,n-1);cout<<"the sorted array";
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    

}