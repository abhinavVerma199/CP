#include<stdio.h>
int main()
{
    //write a prigram find if a character entered by upper case or not
   char ch;
   printf("enter ch\n");
   scanf("%c",& ch);

if (ch>= 'A' && ch<= 'z' ){
    printf("upper case\n");
}
else if (ch>= 'a'&& ch<= 'b'){
    printf("lower case\n");
}
else{
    printf("not a english\n");
}
return 0;
}