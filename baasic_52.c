#include<stdio.h>
int main()
{
  /*search on what a "nested loop" is & print this pattern using it
 *****
 *****
 *****
 *****
 */
int i, j;

for(int i=1;i<=4;i++){

for(int j=1;j<=5;j++){
    printf("*");

}
printf("\n");
}
return 0;
}