//array------
#include<iostream>
using namespace std;

int main()
{
    int marks[4] = {23,33,45,66};

   //int mathmarks[4] = {2278,778,678,578};

    // mathmarks[0] = 2278;
     //mathmarks[1] = 778;
    // mathmarks[2] = 678;
    // mathmarks[3] = 578;   
   /*
cout << "These are marks"<< endl;
cout << mathmarks [0] <<endl;
cout << mathmarks [1] <<endl;
cout << mathmarks [2] <<endl;
cout << mathmarks [3] <<endl;

    cout << marks [0] << endl;
    cout << marks [1] << endl;
    cout << marks [2] << endl;
    cout << marks [3] << endl;
*/
//for(int i=0;i<4;i++){
    cout << marks [0] << endl;
    cout << marks [1] << endl;
    cout << marks [2] << endl;
    cout << marks [3] << endl;

    int i = 0;
    do{
i++;



   // int i = 0;
    //while(i<4){
    cout <<"The value of marks "<< i<< " is" << marks[i] << endl;
   // cout << "the value of marks "<< i<<" is" << endl;
    //i++;
}
while (i<4);
   


return 0;
}