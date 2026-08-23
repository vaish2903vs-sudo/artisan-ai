#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    if (n==1)
    {
        return ;//base case ;;
    }
    for (int i = 0; i <= n-2; i++)
    {
        if (arr[i]>=arr[i+1])
        {
            swap(arr[i],arr[i+1]);//greatest elemnt reaches the end 
        }
        
    } bubble_sort(arr, n-1);
    
} int main(){
    int n;cout<<"size of array ";
    cin>>n;cout<<"enter elements of array";int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];cout<<" ";
    } cout<<endl;
    bubble_sort(arr,n);cout<<"the sorted array";
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    

}