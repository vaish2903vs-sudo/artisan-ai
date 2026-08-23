#include<bits/stdc++.h>
using namespace std;
void leftroate(vector<int>&nums, int n){
    int temp= nums[0];
for(int i=1 ; i<n ;i++){
    nums[i-1]=nums[i];
} nums[n-1]=temp;
} int main(){
    int n;cout<<"enter size of array";
    cin>>n;
    vector<int>nums(n);cout<<"enter elemnts of array";
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
     leftroate(nums,n);
     cout<<"rotated array by one place";
     for (int i = 0; i < n; i++)
    {
        cout<<nums[i];
    }
    
}