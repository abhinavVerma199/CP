#include<stdio.h>
int main()
{
    //keep taking numbers as input from users until user enters an odd numbers
    int n;
    do{
printf("enter number :");
scanf("%d",&n);
printf("%d\n",n);
 
 if (n % 2!=0){
    break;

    }
    }
while(1);
printf("thank you");
return 0;
}