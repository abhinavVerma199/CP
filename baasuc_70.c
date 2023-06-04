#include<stdio.h>

//write a function to find sum of digits  of a number
int sumcubes (int);
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
   printf("sum is %d", sumcubes(x));
}
int sumcubes (int n)
{
    if(n==1)
    return(1);

    return(n*n*n+sumcubes(n-1));
}
