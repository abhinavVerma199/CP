#include<stdio.h>
//factorial of n

int fact (int n);

int main()
{
 printf("fact is %d\n",fact(5));



return 0;
}
int fact (int n){
if (n==0){
    return 1;
}
int factNm1 = fact(n-1);
int factN = fact(n-1)*n;
return factN;
}
