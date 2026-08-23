#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
   // exp1 ? exp2 : exp3
   n%2==0 ? printf("even"): printf ("odd");
    return 0;
}