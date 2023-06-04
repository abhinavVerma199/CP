#include<stdio.h>
//sum of first n natural number
int sum(int n);
int main()
{
   printf("sum is %d\n",sum(5));


return 0;
}
//recursive function
int sum(int n){
if(n==1){
   return 1;
}

 int sumN1= sum(n-1);//sum of 1 to n
 int sumN = sumN1 + n;
 return sumN;
}