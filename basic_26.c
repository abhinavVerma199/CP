#include<stdio.h>
int main()
{
   char day;//m-monday;t-tuesday
   printf("enter day:(1-7):");
   scanf("%s",&day);
   switch (day){
    
case 'm':printf("monday\n");
break;

case 't':printf("tuesday\n");


case 'w':printf("wednesday\n");
break;
case 'T':printf("thursday\n");
break;


case 'f':printf("friday\n");
break;

case 's':printf("saturday\n");
break;
 case 'S' :printf("sunday\n") ;
 break; 
 default:printf("not a valid day!\n");
   }
return 0;

}