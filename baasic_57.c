#include<stdio.h>

//write a funtion that print the namaste  if user is indian and bonjour if the user is french


void namaste();
void bonjour();

void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}
int main()
{
   printf("enter f for french & i for indian\n");
  char ch;
  printf("enter the character\n");
 scanf("%c",&ch);
 
if(ch=='i'){
    namaste();
 } else{
        bonjour();
    }

return 0;
}