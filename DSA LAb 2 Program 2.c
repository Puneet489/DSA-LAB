#include <stdio.h>

int main()
{
    int m, n, o, p, k, l;
    printf("Enter the size of the first matrix");
    scanf("%d %d", &m, &n);
    printf("Enter the size of the second matrix");
    scanf("%d %d", &o, &p);
    int arr1[m][n];
    int arr2[o][p];

    int i, j;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("Enter a %d%d ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (k = 0; k < o; ++k)
    {
        for (l = 0; l < p; ++l)
        {
            printf("Enter b %d%d ", o, p);
            scanf("%d", &arr2[k][l]);
        }
    }

    if (m == o && n == p)
    {
        int ans[m][n];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; ++j)
            {
                ans[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        printf("The answer is \n");
        for (k = 0; k < m; ++k)
        {
            for (l = 0; l < n; ++l)
            {
                printf("%d ", ans[k][l]);
            }

            printf("\n");
        }
    }

    else
    {
        printf("The two matrix cannot be added \n");
    }

    return 0;
}