#include<iostream>
using namespace std;
int summation(int n){
    if (n==0)
    {
        return 0;
    }  
        return n+summation(n-1);//call the function once and using sum a new sum printed everytime so no;
     
}      int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
  cout<<  summation(n);
    
}