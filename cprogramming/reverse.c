#include<stdio.h>
int main()
{int n;
    printf("enter a number");
    scanf("%d",&n);
int r =0;
int ld=0;
while(n>0){
ld=n%10;
r=r*10;
r= r + ld;
n=n/10;
}
printf("the sum of digits are %d",r);
    return 0;
} 