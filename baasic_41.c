#include<stdio.h>
int main()
{
  //print the sum of first n natural numbers 
//n=4;
  //reverse 
       int n;  
       printf("enter a number\n");
        scanf("%d",&n);
          int sum = 0;
             for(int i=n;i>=1;i--)
             {
                   sum+=i;
                    printf("%d ",i);
             }
          printf("sum is %d\n",sum);
        // reverse

        //for(int i=n;i>=1;i--) printf("%d ",i);

return 0;
}