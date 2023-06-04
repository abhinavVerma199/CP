#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a number :");
    scanf("%d",&x);
    for(int i=2;i<=x-1;i++)
        if(x% i ==0)
        break;
        if(x==1)
            printf("%d is a prime number",x);
        else
        printf("%d is a not prime number",x);
 
    
return 0;
}