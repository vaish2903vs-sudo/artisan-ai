#include<iostream>
using namespace std;
int main (){
    string s = "lungs";
    int len = s.size();
    s[len-1]='z';
    cout<<s;
    cout<<len;
}