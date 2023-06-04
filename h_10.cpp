#include<iostream>
using namespace std;

class abhinav{
   private:
     int age;
     string name;
     int marks;

     public:
       void setData(int age , int marks , string name)
       {
             this->age = age;
             this->marks = marks;
             this->name = name;
       };
       void getData(void)
       {
          cout<<"Name = "<<name<<"\n"<<"Age = "<<age<<"\n"<<"Marks = "<<marks<<"\n";
       }
    
};


int main()
{
   //syntax for loop
   //for (initialization; condition; updation)
   // {
    //   loop body(c++ code);
   //}
 
    // Example of infinite loop

//for(int i=1;i<=40;i++){


 //   cout << i << endl;
//}


//*********** While loop in cpp ***********
//syntax:
// while(condition):
//{
    // c++ statements;
//}

//Printing 1 to 40 using while loop

//int i =1;
//while(i<=40){
  //  cout<<i<<endl;
   // i++;

//}

// Example of infinite while loop
//int i=i;
////while(true){
    //cout<<i<<endl;
    //i++;
//}


//*** do While loop in c++ ***********
//syntax:
//do
// {
    // c++ statements;
    //}while(condition)
/*
 int i=1;
 do{
    cout<<i<<endl;
    i++;
 }while(i<=40);
 */
 
// int n;
// cout<<"Enter number"<< endl;

// do{
    
//     cout<<n<<endl;
//     n = n*6;
    
// }while(n<=10);

/*
 //print the table by input by the user
   int n;
   printf(" enter number");
   scanf("%d",&n);
   for(int i=1;i<=10;i++){
    printf(" %d\n",n*i);
   }
*/
/*
  bool opt =true;
  do{
 int n;  cout<<"enter a number\n";
 cin>>n;
 int i = 1;
   do{
       cout<<n<<"X"<<i<<" = "<<n*i<<"\n";
    ++i;
   }while(i<=10);

   cout<<"want to continue? press any key other than 0\n";
    int k;  cin>>k;
    if(k==0) opt = false;

  }while(opt);
  */


   int n; cout<<"enter total numbers of students\n"; cin>>n;
   abhinav allstudents[n];

     for(int i=0;i<n;i++)
     {
          cout<<"enter details of the student := "<<i+1<<"\n";
           string name; cout<<"name:= "; cin>>name;
           int age; cout<<"\nage:= "; cin>>age;
           int marks; cout<<"\nmarks:= "; cin>>marks;
          allstudents[i].setData(age , marks , name);
     }
 

     for(int i=0;i<n;i++)
     {
          cout<<"student := [ "<<i+1<<" ]\n";
          allstudents[i].getData();
     }





return 0;
}