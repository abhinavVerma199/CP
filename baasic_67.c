#include<stdio.h>
//write a function to convert celcius to fohrenheit
float convertTemp (float celsius);
int main()
{
  float far = convertTemp(32);
  printf("far : %f",far);


return 0;
}
float convertTemp (float celcius){
    float far = (celcius*9/5)+32;
return far;
}