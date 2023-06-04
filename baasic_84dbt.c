//write a program in C to print all the letters in english alphabet using a pointer.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *c;//declare a character pointer
    c = (int*)malloc(sizeof(int)); // assigning memory to c

    *c = 'A';//conpiler automatically convert 'A' to carresponding ASCII value , that is 65
    //the store value is stored in c
    //checking if integer pointer by c
    //is less than equal to ASCII valur os alphaber 'z'
    while(* c<='Z'){
        printf("%c\n",*c); //%c prints the character whose ASCII value is equal to *C 
        *c = *c+1;  // increment the integer value that pointer c is pointing to
    }
    


return 0;
}