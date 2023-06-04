#include<stdio.h>
#include<math.h>
//use library funtion to calculate the square of a number given by user
 void calculatePrice( float value);
int main()
{
    int n =4;
    printf("%f\n",pow (n,2));
   

  //  void printsquare();
        
   


return 0;
}
void calculateprice( float value){
    value = value + (0.18 * value);
    printf("final price %f\n",value);
}