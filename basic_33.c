//write a program to check a natural number or not
#include<stdio.h>
int main()
{
   int N;
   printf("enter a natural number\n");
   scanf("%d",&N);
if (N >=1 && N <=9){
    printf(" is a natural number\n");
}
    else{
        printf("is not a natural number\n");
    }


return 0;
}