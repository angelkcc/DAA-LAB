//randomized quick sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int partition(int a[], int l, int h)
{
    int i = l + 1;
    int j = h;
    int temp;

    // RANDOM PIVOT SELECTION
    int randomIndex = l + rand() % (h - l + 1);

    // Swap random element with first element
    temp = a[l];
    a[l] = a[randomIndex];
    a[randomIndex] = temp;

    int pivot = a[l];

    while(i <= j)
    {
        while(a[i] <= pivot && i <= h)
            i++;

        while(a[j] > pivot)
            j--;

        if(i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[l];
    a[l] = a[j];
    a[j] = temp;

    return j;
}

void quicksort(int a[], int l, int h)
{
    if(l < h)
    {
        int p = partition(a, l, h);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, h);
    }
}

int main()
{
    int n, i;

    // Seed random number generator
    srand(time(NULL));

    printf("RANDOMIZED QUICK SORT\n");

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[100];

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);

    printf("The sorted list is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
