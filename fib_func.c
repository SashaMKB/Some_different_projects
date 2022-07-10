#include <stdio.h>

int fib_func(int i)
{
    if ( i == 1 || i == 0) {
        return 1;
    } else {
        return fib_func(i-1) + fib_func(i-2);
    }
}

int main()
{
    int n;
    printf("Plese,enter number:\n");
    scanf("%d", &n);
    if (n == (int)n ) {
        printf("%d\n", fib_func(n));
    } else{
        printf("n/a\n");
    }
    return 0;
}
