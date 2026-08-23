#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s, int left , int right ){//bool because condition is checked
if (left>=right)//check string has reached middle
{
    return true;
}
if (s[left]!=s[right])//check that characters at these indices are equal or not
{
    return false;
}
  palindrome(s,left+1,right-1);

} int main(){
    string s;
    cout<<"enter the character";
    cin>>s;
    if (palindrome(s,0,s.length()-1))
    {
        cout<<"it is a palindrome";
    }
    else cout<<"not a palindrome";
    return 0;
}