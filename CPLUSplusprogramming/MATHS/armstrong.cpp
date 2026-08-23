#include<bits/stdc++.h>
using namespace std;
void armstrong(int n)
{ //count no of digits
    int original=n;
    int count=0;
    int temp =n;
    while ( temp >0)
    {
        count++;
        temp/=10;
    }
    int sum=0;
    int per =n;
    //sum of digits 
    while (per>0)
    {
        int digit=per%10;
        sum+=round(pow(digit,count));
        per/=10;
    } 
    //decision making;;
    if (sum==original)//important point
    {
        cout<<"armstrong number";
    }
    else cout<<"not an armstrong number";
    cout << "count = " << count << endl;
cout << "sum = " << sum << endl;
cout << "original = " << original << endl;
    
} int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    armstrong(n);
    return 0;}

