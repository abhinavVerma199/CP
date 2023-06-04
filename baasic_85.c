#include<stdio.h>
int main()
{
   int marks[3];
   printf("enter the marks of phy\n");
   scanf("%d",&marks[0]);
    printf("enter the marks of chemistry\n");
    scanf("%d",&marks[1]);
    printf("enter the marks of math\n");
    scanf("%d",&marks[2]);
    
    printf("marks of phy = %d, marks of chem = %d,marks of math = %d\n",marks[0],marks[1],marks[2]);


return 0;
}