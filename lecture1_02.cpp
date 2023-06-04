#include<iostream>
using namespace std;

//Recursion wala function

void print(int n){
 
 //base case 
 if(n == 0)
 return;



//recursion call
print (n-1);
cout << n  << " ";
}
int main()
{
    int n;
   cout << "Enter the value of n" << endl;
   cin >> n;
   cout << "printing in decreasing order" << endl;
   print (n);
   cout  << endl;


return 0;
}