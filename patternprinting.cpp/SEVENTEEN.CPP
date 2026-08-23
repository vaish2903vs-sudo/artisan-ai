#include<iostream>
using namespace std;
void pattern17 (int n){
    for (int i = 1; i <=n; i++)
    {
        for (int  j = 1;j<=(n-i-1) ; j++)
        { 
            cout<<" ";
       }
        for (int v = 1; v<=i; v++)
        { int num= 65+v-1;
            cout<<(char)num;
        }
       
    {  char ch='A'+i-2;
        
        for (int j = 1; j < i; j++) {
            cout << ch--;
        }
    cout<<endl;
 }
}}
    

int main (){
    int n;
    cout<<"enter the number n=";
    cin>>n;
    pattern17(n);
}