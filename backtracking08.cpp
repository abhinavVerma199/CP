#include<iostream>
using namespace std;

void solve(int arr[], int size){
    //base case
    if(size <= 1)
    return;


    //for loop-> printing
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    
    }cout << endl;

    //Recursion call
    solve(arr, size/2);
}




void solveTwo(int *arr, int s, int e){

    //base case
    if(s >=e){

        cout << arr[s] << endl;
    
    return;
    }

//for loop printi
for(int i=s; i<=e; i++){
    cout << arr[i] << " ";   
}cout << endl;

int mid = (s+e)/2;
//recursive call
solveTwo(arr, s, mid);

}





int main()
{
    int arr[] = {3,4,1,5,6,2,7};
    int size = 7;

    solveTwo(arr, 0, size-1);

   


return 0;
}