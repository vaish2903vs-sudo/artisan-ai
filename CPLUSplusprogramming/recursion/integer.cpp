#include<iostream>
using namespace std;
void integer(int n){
    if (n==0)
    {
        return;
    }
    cout<<"vaishnavi"<<endl;
    integer(n-1);
} int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    integer(n);
    return 0;}
