//structure

#include<iostream>

using namespace std;
 typedef struct employee
 {

    /*data*/
    int eid;
    char favchar;
    float salary;
}ep;

int main()
{
    ep abhi;
ep shubh;
 ep satyam;
abhi.eid =1;
abhi.favchar = 'c';
abhi. salary = 120000000;

cout<< "The value is"<< abhi.eid<< endl;
cout<< "The value is"<< abhi.favchar<< endl;
cout<< " The value is "<<abhi.salary<< endl;
    
return 0;
}