#include<stdio.h>/////PASSIVE ARGUMENTS

//write the program to print the sum of two number using funtion
int sum (int a, int b);//funtion prototype
int main()        //funtion call
{
    int a,b;
    printf("enter the first number :");
   scanf("%d",&a);
printf("enter the second number :");
scanf("%d",&b);
int s = sum (a,b);
printf(" sum id %d",s );
return 0;
}
int sum( int x ,int y){//funtion definition
return x+y;
}