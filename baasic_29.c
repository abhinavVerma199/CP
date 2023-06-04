/*write a program to give grades to a student 
marks < 30 is C
30<=marks<70 is B
70 <= marks <90 is A
90 <= marks <=100 is A+
*/
#include<stdio.h>
int main()
{
   int marks;
   printf("enter marks\n");
   scanf("%d",&marks);

 if (marks <= 30){
    printf("C\n");
}
else if (marks >= 30 && marks <70){
    printf("B\n");
} 
else if (marks >= 70 && marks <90){
    printf("A\n");
}
else{
    
        printf("A+\n");


     }
return 0;

}