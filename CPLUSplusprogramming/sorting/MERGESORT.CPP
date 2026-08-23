#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low, int mid ,int high ){
    vector<int>temp;
int left=low;
int right =mid +1;
//left low....mid;
//right mid+1..high;
while (left<=mid&& right<=high)
{if (arr[left]<=arr[right])//compairing elemnts
{
    temp.push_back(arr[left]);
    left++;
}
else temp.push_back(arr[right]);
}while(left<=mid)
{
    temp.push_back(arr[left]);left++;
}while(right<=high)
{
    temp.push_back(arr[right]);right++;}
for (int i = low; i <= high; i++)
{
    arr[i]=arr[i-low];
}
}


 void ms( vector<int>& arr,int low , int high){
    if (low>=high)
    {
        return ;
    }
    int mid= (low+high)/2;
     ms(arr,low,mid);
     ms(arr,mid+1,high);
     merge(arr,low,mid,high);
 }
  void merge(vector<int>&arr,int n ){
    ms(arr,0,n-1);
 } 
 int main(){
 int n;cout<<"enter size of array";
    cin>>n;
    int arr[n];cout<<endl;
    vector<int>arr(n);
    cout<<"element of array";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    cout << "Sorted array: ";
    for(int x : arr) {
        cout << x << " ";
    }
}

 