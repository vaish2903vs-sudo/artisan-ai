#include<stdio.h>
int main()
{
    long n;
    printf("enter a number");
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("the number is divisible by 5");
    }
    else{
        printf("the number is not divible by 5");
    }
    return 0;
}