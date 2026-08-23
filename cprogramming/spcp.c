#include<stdio.h>
int main()
{
    int c;
    printf("enter cost price \n");
    scanf("%d",&c);
    int s;
    printf("enter the selling price \n");
    scanf("%d",&s);
    if (c<s)
    {int profit;
         profit = s-c;

        printf("profit is :%d\n",profit);
    }
    else{ int loss;
        loss=c-s;
        printf("loss is:%d \n",loss);
    }
    return 0;
}