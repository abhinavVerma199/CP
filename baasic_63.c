#include<stdio.h>
//print hello world  5 times

void printHW(int count);
int main()
{
   printHW(5) ;

return 0;
}
//Recursion function
void printHW(int count){
    if(count ==0){
        return ;
    }
printf("Hello world\n");
printHW(count -1);

}