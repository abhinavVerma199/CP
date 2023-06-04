#include<iostream>
using namespace std;
struct employee;

    /*data*/
    int eid;//4
    char favchar;//1
    float salary;//4

union money
{
    /*data*/
    int rice;//4
    char car;//1
    float pounds;//4

};

int main()
{
//struct employee;
   // union money m1;
   // m1.rice =34;
   // m1.car ='c';
   // cout <<m1.car;

//*** use of enum **********
enum Meal {breakfasr,lunch,dinner};
//cout << breakfast;
//cout << lunch;
//cout << dinner;

   Meal m1 = lunch;
   cout << (m1 ==2);


return 0;
}