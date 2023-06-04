#include <iostream>
#include <vector>
using namespace std;

void print(int arr[], int size, int index)
{
    // base case
    if (index == size)
        ;
    return;

    // ek case solve
    cout << arr[index] << ",";

    // Recursion call
    print(arr, size, index + 1);
    cout << arr[index] << ",";
}

void revprint(int arr[], int index)
{
    // base index
    if (index < 0)
        return;

    cout << arr[index] << ",";

    // Recutsion relation
    revprint(arr, index - 1);
}

void print3(int arr[], int size)
{
    // base case
    if (size == 0)
        return;

    cout << arr[0] << ",";

    // Recursion call
    print3(arr + 1, size - 1);
}

int getMax(int arr[], int size, int index)
{
    // base case
    if (index == size)
        return INT_MIN;

    int meraAns = arr[index];
    int recursionKaAns = getMax(arr, size, index + 1);
    int finalAns = max(meraAns, recursionKaAns);
    return finalAns;
}

void getMaxElement(int arr[], int size, int index, int &maxi)
{ // USING CALL BY REFERENCE
    // base case
    if (index == size)

        return;

    maxi = max(maxi, arr[index]);

    // recursion relation
    getMaxElement(arr, size, index + 1, maxi);
}

int findfirst(int arr[], int size, int index, int target)
{
    // base cade
    if (index == size)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    else
    {
        return findfirst(arr, size, index + 1, target);
    }
}

int findlast(int arr[], int size, int index, int target){
    //base case
    if(index < 0){
        return -1;
    }
    if(arr[index] == target){
        return index;
    }
    else{
        return findlast(arr, size, index-1, target);
    }
}

void findAllOcc(int arr[], int size, int index, int target, vector<int>&ans){
// base case
if(index == size){       //FIND ALL ACCURANCE
    return;
}

if(arr[index] == target)
    ans.push_back(index);

    findAllOcc(arr,size, index+1, target, ans);
}

    int main()
{
        int arr[] = {1, 3, 4, 2, 5, 4, 2, 2, 1};

        int size = 9;
        int target = 2;

        vector<int> ans;
        findAllOcc(arr, size,0, target,ans);

        cout << "Printing the ans array" <<endl;
        for( int i=0; i<ans.size(); i++){
            cout << ans[i] <<" , ";
        }
        cout << endl;
        //cout << findfirst(arr, size, 0, target);
       // cout << findlast(arr, size, size-1, target);

        // int maxi = INT_MIN;
        // getMaxElement(arr, size, 0, maxi);
        // cout << maxi << endl;

        // print3(arr, size);

        // revprint(arr,size-1);
        // print(arr,size, 0);
        cout << endl;

        return 0;
        }
    