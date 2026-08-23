#include<iostream>
using namespace std;
int main()
{ int a,b;
    cout<<"enter the number";
    cin>>a>>b;
   //for gcd;
   int gcd=1;
   for (int i = 1; i <= min(a,b); i++)
   { 
    if(a%i==0 && b%i==0)
    gcd=i;
   }
   cout<<"the gcd is "<<gcd;
}
   