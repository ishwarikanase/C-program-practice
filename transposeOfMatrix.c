#include <stdio.h>
int main()
{
    int arr[2][2] = {1, 2, 3, 4}, arr1[2][2];
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            arr1[col][row] = arr[row][col];
        }
    }
    printf("Transpose of given matrix:\n");
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d\t", arr1[row][col]);
        }
        printf("\n");
    }
}