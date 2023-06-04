#include <stdio.h>
int main()
{
    // nested switch are allowed
    int number;
    printf("enter number\n");
    scanf("%d", &number);
    if (number >= number)
    {
        printf("possitive\n");
    }
    if (number % 2 == 0)
    {
        printf("even\n");
    
    }else if(number %2){
    

        printf("odd\n");
    }else{
        printf("negative\n");
    }
    return 0;
}