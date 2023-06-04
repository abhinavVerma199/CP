//******Inline function, Default Arguments & constant Arguments in c++



#include<iostream>
using namespace std;

inline int product(int a, int b){
    //Not recommended to use below lines with inline functions

return a*b;
}
     //**** static function
     //int product(int a, int b){
        //static int c=0;    //this executes only once
        //c = c+1;         //Next time this function is run, the value of c will be retained
        //return a*b+c;
     
int moneyRecieved(int currentMoney, int factor= 1.04){
    return currentMoney * factor;

}

// ***constant arguments****
   // int strlen(const char *p){

   //}
int main()
{ //inline function and needs
   
   int a, b;
   //cout<<"Enter the value of a and b"<<endl;
   //cin>>a>>b;

  //cout<<"The product of a and b is "<<product(a,b)<<endl;


  //*** Default arguments**********
int money = 100000;
cout<<"If you have "<<money<<" Rs in your bank account, you will recive"<<moneyRecieved(money)<<"Rs after 1 year"<< endl;
cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyRecieved(money, 1.1)<< "Rs after 1 year";

return 0;

}
