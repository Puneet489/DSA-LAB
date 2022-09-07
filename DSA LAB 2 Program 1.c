#include <stdio.h>
int main()
{
    int c1[7], c2[7];
    int i, j;

    printf("Enter city 1 values");
    for (i = 0; i < 7; ++i)
    {
        scanf("%d", &c1[i]);
    }
    printf("Enter city 2 values");
    for (j = 0; j < 7; ++j)
    {
        scanf("%d", &c2[j]);
    }

    for (i = 0; i < 7; ++i)
    {
        printf("City 1 Day %d :- %d \n", i, c1[i]);
    }

    for (j = 0; j < 7; ++j)
    {
        printf("City 2 Day %d :- %d \n", j, c2[j]);
    }
}