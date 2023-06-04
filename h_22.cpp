//*****   Orientation programing in cpp

//Classes, Public and private access modifiers in c++
#include<iostream>
using namespace std;

class Employee
{
    private:
    int a, b, c;
    public:
    int d, e;
    void setData(int a1, int b1, int c1);//set data function
    void getData(){
//getData printe the value
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
cout<<"The value of c is "<<c<<endl;
cout<<"The value of d is "<<d<<endl;
cout<<"The value of e is "<<e<<endl;


        
    }
};
void Employee :: setData(int a1, int b1, int c1){
    //    :: Resolution operator
a = a1;
b = b1;
c = c1;

}


int main()
{
    // make a object
    Employee abhi;
    // abhi.a = 134; ---> this will error as a is private data
    abhi.d = 34;
    abhi.e = 89;
    abhi.setData(1,2,4);
    abhi.getData();
   


return 0;
}