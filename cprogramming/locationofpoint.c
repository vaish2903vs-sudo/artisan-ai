#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a point");
    scanf("%d",&x);
    scanf("%d",&y);
    if (x==0)
    {
        printf("lies on y axis");
    }
else if (y==0)
{
printf("point lies on x axis");
}
 if (x==0 && y==0)
{
    printf("lies on origin");
}
    return 0;
}