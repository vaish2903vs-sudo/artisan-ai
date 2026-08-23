#include <bits/stdc++.h>
using namespace std;
void pattern14(int N)
{  
     for (int i = 1; i <= N; i++)
{  
    for ( int j =0 ; j<i; j++)
    {  int num =65+i-1;
        cout<<(char)num;
    }
    cout<<endl;
} 
}
int main (){
    int N;
    cout<<"enter the number";
    cin>>N;
    pattern14(N);
}

