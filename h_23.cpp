
 // OOps  - Classes and objects

    // c++ --> initially called  --> c with classes by stroustrop
    // class --> extension of structures (in C)
    // structures had limitations
    //    ---> members are public
    //    ---> No methos
    // classes --> structures + more
    // classes --> can have method and properties
    // classes --> can make few members as private & private & few as public
    // structure in c++ are typedefed
    // you can declare object along with the class declartion like this:
    // class Employee{
    //   //Class definition
    //}  harry , rohan, lovish;
    // harry.salary = 8 makes no sense if salary is private

    // Nesting of member functions










//   OOPs Recap & Nesting of Member Function in C++

#include <iostream>
#include <string>
using namespace std;

class binary
{
 private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);

};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(void)
    {
        chk_bin();
        for (int i = 0; i < s.length(); i++){
            if(s.at(i)== '0'){
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';

            }


        }
    }
    void binary :: display(void){
    {
        cout<<"Displaying your binary number"<<endl;
        for (int i = 0; i < s.length(); i++){
            cout<<s.at(i);
            }
;        }
    }



int main()
{
   
    binary b;
    b.read();
//b.chk_bin();
b.display();
b.ones_compliment();
b.display();

return 0;
}
