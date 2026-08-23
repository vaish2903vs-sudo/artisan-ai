#include<iostream>
using namespace std;
void  reversearr(int arr [],int n){ if (n==0)
return ;
cout<<arr[n-1]<<" ";
    reversearr(arr,n-1);
} int main(){ int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    
    reversearr(arr,n);
    
}