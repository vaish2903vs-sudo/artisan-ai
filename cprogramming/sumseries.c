#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
int sum=0;
for (int i = 0; i <= n; i++)
{
    if (i%2!=0) 
    sum= sum +i;
     else  sum= sum-i;
    
}

    return 0;
} 