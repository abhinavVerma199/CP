#include<iostream>   //call by value & call by reference
using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}

void swap(int a, int b){ //temp a b
    int temp =a;         // 4   4  5
    a = b;                // 4  5  5
    b = temp;             //4   5  4
}
int main()
{
    int a =4, b=5;
   

//cout<<"The sum of 4 and 5 is"<<sum(4,5);

cout<<"The value of a is "<<a<<"and the value of b is "<<b<<endl;
swap(a,b);
cout<<"The value of a is "<<a<<"and the value of is"<<b<<endl;
return 0;
}