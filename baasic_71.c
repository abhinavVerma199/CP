//write a funtion to  the find square root of number

//c program approch
#include<stdio.h>
#include <math.h>
//funtion to find the square root of N

double findSQRT(double N) {return sqrt(N); }

int main()
{
  //Given number
  int N =12;

  //funtion call
  printf("%f", findSQRT(N));


return 0;
}