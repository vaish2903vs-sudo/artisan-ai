#include<stdio.h>
int main()
{int n;
    scanf("%d",&n);
    printf("enter the number");
    for (int i = n ; i <= 10*n ; i=i + n ){
    
        printf("%d",i);
    }
    
    
    
    return 0;
} 