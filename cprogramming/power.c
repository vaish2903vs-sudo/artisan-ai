#include<stdio.h>
int main()
{int n;
     scanf("%d",&n);
     printf("enter the number:");
     int b;
     printf("enter the number:");
     scanf("%d",&b);
     int p=1;
for (int i = 1; i <=b; i++){

 p=p*n;
}

    printf("the power is %d ,%d,%d",n,b,p);
return 0;
}