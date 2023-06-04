#include<stdio.h>
int main()
{
   
   //keep taking numbers as input from user until user enters a number which is multiple

int n;
do{
printf("emter number :");
scanf("%d",&n);
printf("%d\n",n);
 
 if(n %7 ==0);   //multiple of 7
break;
}
while(1);
printf("thank you\n");
return 0;
}