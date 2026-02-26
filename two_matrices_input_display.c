
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], i, j, k;

    printf("\nEnter Values for First matrix :");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
        {
            printf("\nEnter Value for 2D Array:");
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter Values for Second matrix :");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
        {
            printf("\nEnter Value for 2D Array:");
            scanf("%d", &b[i][j]);
        }

    printf("\nFirst Matrix is:");
    for(i = 0; i < 3; i++)
    {
        printf("\n");
        for(j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }

    printf("\nSecond Matrix is:");
    for(i = 0; i < 3; i++)
    {
        printf("\n");
        for(j = 0; j < 3; j++)
            printf("%d\t", b[i][j]);
    }
}
