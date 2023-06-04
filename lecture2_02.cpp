//reverse array print
#include<iostream>
#include<vector>
using namespace std;

void print (int arr[], int size, int index){
    //base case 
    if(index == size)
    return;

    //ek case solve

    //Recursion call
    print(arr, size, index+1);

    cout << arr[index] <<",";
}
int main()
{
   int arr[] = {1,3,5,7};
   int size = 4;

   print(arr,size, 0);
   cout <<endl;


return 0;
}