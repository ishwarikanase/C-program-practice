#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 1}, sumRight = 0, sumLeft = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d\t", arr[i][j]);
                sumLeft = sumLeft + arr[i][j];
            }
        }
    }
    printf("%d\n", sumLeft);
    int j = 2;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", arr[i][j]);
        sumRight = sumRight + arr[i][j];
        j--;
    }
    printf("%d\n", sumRight);
}