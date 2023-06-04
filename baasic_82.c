#include<stdio.h>//write a program in c to find the maximum number between two numbers using a pointer.*************************
int dowork(int*a , int *b)
{
       if(*a > *b) return *a;
       else return *b;
}
int main()
{
   
     int a, b;
      printf("enter both the numbers\n");
      scanf("%d%d",&a,&b);

      int ans = dowork(&a,&b);
    printf("the largest number out of : %d and %d is := %d",a,b,ans);


return 0;
}