#include<stdio.h>
int main()
{
   //print reverse of the table for a number n
int n;
printf("enter number :");
scanf("%d\n",&n);
for(int i=10;i>=1;i--){
printf("%d\n",n*i);
}
return 0;
}