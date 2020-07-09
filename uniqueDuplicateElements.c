#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 5}, arr1[5];
    for (int i = 0; i < 5; i++)
    {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr1[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("unique:%d is %d times\n", arr[i], count);
        }
        else
        {
            printf("duplicate:%d is %d times\n", arr[i], count);
        }
    }
}