#include <stdio.h>
// write a funtion to prints n terms  of the fibbonacci sequence

int fib(int n);
int main()
{

    printf("%d\n", fib(6));

    return 0;
}
int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fib(n - 1) + fib(n - 2);

    printf("fib of  %d is : %d\n", n, fibN);

    return fibN;
}