//selection sort
#include<stdio.h>

int main()
{
    int n, i, j, min, temp;

    printf("SELECTION SORT\n");

    printf("Enter the number of elements:");
    scanf("%d", &n);

    int a[100];

    printf("Enter the elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }

        // Swap
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("SELECTION SORT\n");

    printf("The sorted list is:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
