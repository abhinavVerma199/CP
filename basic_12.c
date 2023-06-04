#include<stdio.h>
int main()
{
    //average of three numbers
      int a ,b ,c;
       printf("enter three numbers\n");
       scanf("%d%d%d",&a,&b,&c);
     int average = (a+b+c)/3;
     printf("the average of entered three number is :- %d",average);

return 0;
}