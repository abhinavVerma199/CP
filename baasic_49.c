#include<stdio.h>
int main()
{
   int n;
   printf("enter number :");
   scanf("%d",&n);

   int fact = 1;
   for(int i=1;i<=n;i++){
  fact = fact * 1;
   }
   printf(" final factorial is %d",fact);


return 0;
}