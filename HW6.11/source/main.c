#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10];
    int temp;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int pass = 0; pass < 9; pass++)
    {
        for (int j = 0; j < 9 - pass; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
