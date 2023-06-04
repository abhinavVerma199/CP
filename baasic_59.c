#include<stdio.h>
int sum(int a, int b);
void printtable(int n);
int main()
{
    int n;
  printf("enter number\n");
  scanf("%d", & n);

printTable(n); // arguments /actual parameter

return 0;
}
int sum(int x, int y){
    return x+y;
}
    void printTable(int n){//parameter /formal parameter 
for(int i=1;i<=10;i++){
    printf("%d\n",i*n);
}
    
return 0;
}

//print the table using funtion