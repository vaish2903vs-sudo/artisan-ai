#include<stdio.h>
int main()
{
    int n,sum=0,x;
    printf("enter a number");
    scanf("%d",&n);
    x=n;
    while (n>0)
    {
        sum=sum+ (n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if (sum==x)
    {
        printf("armstrong number");
    }
    else{printf("not");
    }
    return 0 ;
}

    

