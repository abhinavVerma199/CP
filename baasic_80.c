#include<stdio.h>//will the address output be same?
void printAddress(int *n);
int main()
{
   

int n=4;
printAddress(&n);
printf("address of n is %u\n",&n);
return 0;
}//call by reference
void printAddress(int *n){
   printf("address of n is %u\n",&*n);
}