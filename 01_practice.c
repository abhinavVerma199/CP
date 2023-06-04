#include<stdio.h>

  int  calculateArea(int a ,int b){
        return a*b;
  }
int main()
{    
    int len , bth;
      printf("enter the length and bredth of the rectangle\n");
        scanf("%d%d",&len,&bth);

        int area = calculateArea(len,bth);

        printf("the area of the rectangle is : %d",area);
   


return 0;

}