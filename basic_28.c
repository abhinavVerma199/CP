#include<stdio.h>
#include<math.h>
//use ternary operator
int main()
{
    int marks;
    printf("enter number (0-100)");
   scanf("%d",&marks);
   marks<=30  ? printf("fail\n") : printf("pass\n");
/*int marks;
printf("enter marks (0-100) :");
scanf("%d", &marks);
if(marks>=0 && marks<=30){
    printf("FAIL\n");
}

        else if(marks > 30 && marks<=100){
        
printf("PASS\n");
}
else{
    printf("wrong marks\n");
}
*/
return 0;
}
