#include<stdio.h>
int main()
{int n;
    printf("enter numer of rows");
    scanf("%d",&n);
    int a=n;

    for (int i = 1; i <= n; i++)
    {for (int j =1 ; j<=n; j=j++);
        printf("*\n");
    }
    a--;
    printf("\n");
    return 0;
}