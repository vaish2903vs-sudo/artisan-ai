#include<iostream>
using namespace std;
int main()
{ 
    int n;
    int revnum =0;
    int temp=n;
    while (temp>0)
    {
        int lastdigit=n%10;
        revnum=revnum*10+lastdigit;
        temp/=10;
    }
    cout<<revnum;
}
    
