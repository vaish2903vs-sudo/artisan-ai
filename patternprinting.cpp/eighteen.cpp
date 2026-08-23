#include<iostream>
using namespace std;
void pattern18(int n){
    for (int i = 1; i <= n; i++)
    {  
        char ch='E'-i+1;
        
        for (int j = 1; j <=i; j++) {
            cout << ch++;
   }
 cout<<endl;}
}
    int main(){
        int n;
        cout<<"enter the number =";
        cin>>n;
        pattern18(n);
    }