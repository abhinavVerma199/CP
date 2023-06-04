#include<iostream>
using namespace std;

//Recursion wala function
void print (int n){
    //Base case
    if(n == 0)
    return;
    cout << n << " ";

    //Recursion call
    print (n-1);

}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Printing in decreasing order "  << endl;
    print(n);
    cout << endl;

    return 0;
}
   

