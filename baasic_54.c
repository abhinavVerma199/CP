#include <stdio.h>

int isprime(int n)
{
    //write a program to print prime number in a  range
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        }
        return 1;
    }
    int main()
    {
        int n1, n2;
        printf("enter first number\n");
        scanf("%d", &n1);

        printf("enter second number\n");
        scanf("%d", &n2);

        printf("the prime number is %d and %d\n", n1 ,n2);
    

        for (int i = n1; i <= n2; i++)
        {
        if(isprime(i)){
                printf("%d\n", i);
        }
        }
    

    return 0;
    }