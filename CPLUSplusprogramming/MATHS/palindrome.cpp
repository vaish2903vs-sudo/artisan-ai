#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter the number";
    cin>>n;
    int original=n;
    int revnum =0;
    int temp=n;
    while (temp>0)
    {
        int lastdigit=temp%10;
        revnum=revnum*10+lastdigit;
        temp/=10;
    }
    if (original==revnum)
    {
        cout<<" its a palindrome ";
    }
    else cout<<"not a palindrome "
    ;

}
    