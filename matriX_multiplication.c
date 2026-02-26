#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter Values for First Matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Input second matrix
    printf("Enter Values for Second Matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    // Matrix multiplication
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print multiplication result
    printf("\nMultiplication of Matrix is:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}
