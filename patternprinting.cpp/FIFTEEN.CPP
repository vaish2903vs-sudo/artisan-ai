#include <bits/stdc++.h>
using namespace std;
void pattern14(int N)
{  
     for (int i = 1; i <= N; i++)
{  
    for ( int j =0;j < (N-i+1); j++)//JAB i=1 pr n element print ;
    {  
        cout<<char('A'+j);
        
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

