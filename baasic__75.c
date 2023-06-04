/*
int *ptr;
int x;

ptr = &x;
*ptr = 0;

printf(" x = %d\n",x);
printf(" *ptr = %d\n", *ptr);

*ptr += 5;
printf(" x = %d\n",x);
printf(" *ptr = %d\n". *ptr);

(*ptr)++;
printf(" x = %d\n",x);
printf(" *ptr = %d\n", *ptr);
*/

#include <stdio.h>
int main()
{

    int x;
    int *ptr;
    ptr = &x;
    *ptr = 0;     // x = 0
    printf("x = %d\n",x); //0
    printf("*ptr = %d\n", *ptr); // 0

    return 0;
}