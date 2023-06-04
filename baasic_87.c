#include<stdio.h> //poiter arithmatic
int main()
{
   int age =22;
   int *ptr = &age;
   printf("ptr = %u\n", ptr);
   ptr++;

   printf("ptr = %u\n", ptr);
ptr--;
printf("ptr = %u\n",ptr);
return 0;
}