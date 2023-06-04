#include<stdio.h>

//write 2 functions - one to print "hello" & second to print "good bye"
void printhello();//funtion prototype
void printgoodbye();
void printhello(){
    printf("hello\n");
}
void printgoodbye(){
    printf("goodbye\n");
}


int main()
{
    printhello();
printgoodbye();
printhello();

return 0;
}