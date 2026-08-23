#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter the number";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=1;i<=n;i++)
    {
        for (int a=n-1 ; i<=a;a--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
