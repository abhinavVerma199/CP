//print the sum of first n natural numbers
//n=4
 
 //also,print them in reverse.

 #include<stdio.h>
 int main()
 {
    int n;
    int sum = 0;
   printf("enter your the number\n");
    scanf("%d\n",n);

    for(int i=1;i<=n;i++){
        printf("%d\n",i);
        sum =sum +i;
    }
    /*
    int i=0;
    do{
        printf("%d\n",i);
       i++;
    }
       while(i<=9);
    */
   
   /*int i=9;
   do{5
    printf("%d\n",i);
    --i;
   }
   while(i<=0);*/

 return 0;
 }