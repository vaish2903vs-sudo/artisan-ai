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
    for (int i = 0; i <=n-1; i++){ int j;
        j=i;
        while ( j > 0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
        }

    }
    cout<<"sorted array";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}