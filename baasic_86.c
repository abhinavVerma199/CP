#include<stdio.h>//write a program to enter price of 3 items & print their final cost with gst.
int main()
{
    float prices[] = {100.0, 200.0,300.0};
   // float prices[3];
    //printf("enter 3 prices\n");

//scanf("%f",&prices[0]);
//scanf("%f",&prices[1]);
//scanf("%f",&prices[2]);

 
printf("total price : %f\n",prices[0]+(0.18*prices[0]));
printf("total price : %f\n", prices[1]+(0.18*prices[1]));
printf("total prices :%f\n",prices[2]+(0.18*prices[2]));


return 0;
}