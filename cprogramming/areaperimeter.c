#include<stdio.h>
int main()
{
    int c;
    printf("enter the length \n");
    scanf("%d",&c);
    int s;
    printf("enter the breadth \n");
    scanf("%d",&s);
    int area;
    area=c*s;
    printf("area is :%d\n",area);
    int perimter ;
    perimter=2*(c+s);
    printf("prerimeter is :%d\n",perimter);
    if (area<perimter)
    {

        printf("perimeter is greater");
    }
    else{ 
        printf("area is greater");
    }
    return 0;
}