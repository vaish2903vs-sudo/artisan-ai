#include<stdio.h>
float area(float r){
return 3.14*r*r;
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    float s=area(n);
    printf("the area is %f",s);
    return 0;
}

