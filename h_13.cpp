// Pointer arithmatic

#include<iostream>
using namespace std;
int main()
{
    //pointer and arrays
    int marks [4] = {23,44,56,89};
    int *p = marks;
    cout <<"The value of marks [0] is" << *p << endl;
    cout <<"The value of *p is" << *(p+1)<< endl;
    cout <<"The value of *(p+1) is" << *(p+2)<< endl;
    cout <<"The value of *(p+2) is" << *(p+3)<< endl;
   


return 0;
}