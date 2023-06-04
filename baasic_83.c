//write a program in c to print the elements of an array in reverse order
#include<stdio.h>
void arrayRev(int arr[]){

}

int main()
{
   
int arr[] = {1,2,3,4,5,6,67};
printf("before reversing the arr\n");
for(int i=0;i<7;i++){
    printf("the value of element %d is %d\n",i,arr[i]);

}
arrayRev(arr);
printf("after reversing thrarr\n");
for(int i=0;i<7;i++){
    printf("the value of element %d is %d\n",i,arr[i]);
}
return 0;
}