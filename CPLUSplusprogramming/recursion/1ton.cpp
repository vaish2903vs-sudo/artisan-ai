#include<iostream>
using namespace std;
void reverse(int n){ if (n==0)//base case
    return;
    reverse(n-1);
    cout<<n<<" ";
    
}int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    reverse(n);
    return 0;}
