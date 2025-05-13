#include <stdio.h>
void main()
{
    float a[3][3], b[3][3], c[3][3];
    int i, j;
    printf("put any 3 by 3 values\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    printf("\nput other 3 by 3 values\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            c[i][j] = c[i][j] + a[i][j] + b[i][j];
        }
    }
    printf("\n\naddition of two matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%0.0f\t", c[i][j]);
        }
        printf("\n");
    }

    // float a[3][3], b[3][3], c[3][3];
    printf("put any matrix A\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%f", &a[i][j]);
    }
    printf("\nput any matrix B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%f", &b[i][j]);
    }
    printf("\nmultiplication of matrix A and matrix B is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%0.0f  ", c[i][j]);
        }
        printf("\n");
    }
}
