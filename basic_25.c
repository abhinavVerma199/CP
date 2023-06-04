#include <stdio.h>
int main()
{

    int day; // 1-monday,2-tuesday,3-wednesday
    printf("enter a day (1-7) :");
    scanf("%d\n", &day);

    switch (day)
    {

    case 1:
        printf("monday\n");
        // break;

    case 2:
        printf("tuesday\n");
    // break;
    case 3:
        printf("wednesday\n");
    // break;
    case 4:
        printf("thursday\n");

    // break;
    case 5:
        printf("friday\n");
    // break;
    case 6:
        printf("saturday\n");
    // break;
    default:
        printf("not a valid day\n");

        return 0;
    }
}