//call by value and call by reference


#include<iostream>
using namespace std;

int sum(int a, int b){  //temp a  b
                          // 4   4   5
    int c = a + b;         //4   5   5
    return c;             //4    5   4

}
// Function of swap two numbers***********
     // Call by reference using 
void swappointer(int a, int b){  //This will not swap a and b
    int temp =a;
    a = b;
    b = temp;
}

// call by reference using c++ reference Variables
int swapReferenceVar(int &a, int &b){ //temp a b
//int & swapReferenceVar(int &a, int &b){
    int temp = a;             //4   4  5
    a = b;                   //4   5  5
    b = temp; 
    //return a;                //4   5  4
}


int main()
{
   int x =4, y =5;
//cout<<"The sum of 4 and 5 is"<<sum(a,b);
cout<<"The value of x is "<<x<<" and the value of b is"<<y<<endl;
//swap(x,y);   //This will not swap a and b
//swappointer(&x, &y);  //This will swap a and b using pointer reference
swapReferenceVar(x, y);   //This will swap a and b using reference variable
//swapReferenceVar(x, y) = 766;   //This will swap a and b using reference variable

cout<<"The value of x is "<<x<<" and the value of b is"<<y<<endl;



return 0;
}