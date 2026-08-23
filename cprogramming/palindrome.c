#include<stdio.h>
int main()
{
    int n,x,rev=0;
    printf("enter a number");
    scanf("%d",&n);
x=n;
    while (n>0)
    {
        rev=rev*10+ n%10;
        n=n/10;
    }
    if (rev==x)
    printf("palindrome");
    else
    {
    printf("not ");
    }
    return 0;}