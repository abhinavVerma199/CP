#include<iostream>
using namespace std;

int main()
{
   //What is the pointer ----> pointer is data types which in the holds of the address of other data types

   int a = 4;
   int *b = &a;
   // ---> (Address of) operator
   //* ---> (Value at) Drefrence operator

   cout <<"The address of a is "<< &a << endl;
   cout <<"The address of b is "<< b << endl;

   cout <<" The value at address b is "<<*b << endl;

//pointer to pointer
int **c = &b;
cout <<"The address of b is" << &b << endl;
cout <<"The address of b is" << c << endl;
cout <<"The value of address c is" << *c << endl;
cout <<"The value of address value_at (value_at (c) is" <<**c <<endl;


return 0;
}