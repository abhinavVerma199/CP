#include<iostream>
#include<vector>
using namespace std;




void solve(string& str, int i, int j){
    //base case 
    if( i>= j)
    return;

    //1 case
    swap(str[i], str[j]);

    // Recursive relation
    solve(str, i+1, j-1);
}

//void reverse(string str, int index, string& ans){
    // base case
    //if (index == str.length())
    //return;

    // Head Rec
    //reverse(str, index+1, ans);

    // processing
    //ans.push_back(str[index]);

//}



     // Subsequence of a String                         ****  vector pass by reference

     void printSubsequences(string str, int index, string ans, vector<string>& output){


    // base case
if(index == str.length()){
output.push_back(ans);
    return;
}
// include
printSubsequences(str, index+1, ans + str[index],output);


// exclude
printSubsequences(str, index+1, ans,output);
     }


//Add two strings

void addString(string a, string b, int carry, string& ans, int i, int j){

    // base case
    if(i<0 && j<0 && carry ==0){
        return;

    }

int first = 0;
int second = 0;
if( i >= 0)
  first  = a[i] - '0';

  if( j >= 0)  //convert char to int;
  second = b[j] - '0';

    int sum = first + second + carry;
    int lastDigit = sum % 10;
     carry = sum/10;
//convert int to char;
     ans.push_back(lastDigit + '0');



    // recursive call

    addString(a, b, carry, ans, i-1, j-1);

}

int main()
{

string a = "43";
string b = "343";

string ans= "";
addString(a,b,0,ans, a.length()-1, b.length()-1);
//reverse ans
reverse(ans.begin(),ans.end());

cout << "Sum is " << ans << endl;





   // string str = "abc";

    //solve(str, 0, str,length()-1);
   // //vector<string> output;

//cout << "printing output " <<endl;
//for(int i=0; i< output.size(); i++){

   // cout << output[i] <<" ";

//}cout << endl;



    //reverse(str, 0, ans);



   // cout << ans << endl;
   


return 0;
}





















