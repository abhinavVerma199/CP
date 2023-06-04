#include<stdio.h>
int main()
{
    //CHECK IS GIVEN DIGIT OR NOT
  char ch;
//97 -122=a-z ASCAI VALUE
  printf("enter the number \n");
  scanf("%d\n",& ch);
  if (ch <=122 && ch>=97){
printf("enter the digit\n");
  }
  else{
    printf("it is not digit\n");
  }
return 0;
}