#include<stdio.h>
//write a funtion to calculate percentage of a student from marks in science ,math & sanskrit
double calcpercentage( int science, int maths, int sanskrit );

int main(){

int science =98;
int math =89;
int sanskrit =99;
printf("percentage is : %f", calcpercentage (science,  math, sanskrit));
return 0;
}
double calcpercentage(int science, int maths, int sanskrit){

    return (science + maths + sanskrit)*0.3;
}

/*                  OR
#include<stdio.h>
int calcpercentage(int science, int math, int sanskrit);
int main(){
    int science = 98;
    int math = 99
    int sanskrit = 55;
    printf("percentage is %d\n",calcpercentage(science, math,sanskrit));
    return 0;
}
int calcpercentage(int science, int math, int sanskrit){
    return (science+ maths+ sanskrit)/3;

}
*/