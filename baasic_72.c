#include<stdio.h>  //write a function to print the HOT OR COLD using the enter;
float temp(float t);
int main()
{
   
float temperature;
printf("Enter a temprature in celcius : ");
scanf("%f", &temperature);
temp(temperature);


return 0;
}
float temp(float t){
    if (t>30){
        printf("%f is hot\n",t);
    }
    else if(t<30){
        printf("%f is cold\n",t);
    }
    else{
        printf("%f is normal\n",t);
    }
return 0;
}