    
    #include <stdio.h>
    int main()
    {
    int a[3][3], i, j;
    printf("\nEnter Values for the Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
        printf("\nThe Original Matrix is:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\n");
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
         printf("\n\nTranspose of the Matrix is:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\n");
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[j][i]);   // swapped index here
        }
     }
        return 0;
        }
        
        
        
