#include<iostream>
using namespace std;

int main()
{
   int a = 3;
   int * b = &a;
   // address of operator 
   // Dereference of operator
   cout <<"The address of a is "<< &a<<endl;
   //b is a pointer
   cout <<"The address of b is "<< b<< endl;
   // --> (value at) address b is "<< *b<<endl;


//**** pointer to pointer
int **c = & b;

cout <<"The value of b is "<< &b << endl;
cout <<"The address of b is "<< c << endl;
cout <<"The value at address (c) is" << *c << endl;
cout <<"The value at address value_at (value_at(c)) is " <<*c<< endl;

return 0;
}