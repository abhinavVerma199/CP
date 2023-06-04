#include <stdio.h>
int main()
{
    {
        float length, width, perimeter;
        printf("enter the length");
        scanf("%d", &length);
        printf("enter the width");
        scanf("%d", &width);
        perimeter = 2 * (length + width);
        printf("the value of perimeter of square %d\n", length + width);
    }

    int n, square, cube;
    {
        printf("the value of square");
        scanf("%d",&square);
        printf("the value of cube");
        scanf("%d",&cube);
        square = n * n;
        cube = n * n * n;
        printf("square= %d\n", "cube=%d", square, cube);
    }
    return 0;
}
