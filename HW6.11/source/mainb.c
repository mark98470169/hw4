
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10];
    int temp;
    int swapped;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int pass = 0; pass < 9; pass++)
    {
        swapped = 0;

        for (int j = 0; j < 9 - pass; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
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
