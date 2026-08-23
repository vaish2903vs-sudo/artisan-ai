#include <stdio.h>
int main ()
void dec(int n) {
    if (n == 0)
        return;
    printf("%d ", n);   // print the current number
    dec(n - 1);         // recursive call with n-1
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    dec(a);
    return 0;
}