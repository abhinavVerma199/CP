#include<stdio.h>        //gst program
void calculatePrice(float value);//funtion prototype
int main()
{
    //funtion call
  float value = 100.0;

calculatePrice (value);
printf("value is %f\n",value);
return 0;
}
void calculatePrice(float value){ //funtion definition
    value = value + (0.18 * value);
    printf("final price is  %f\n", value);
}