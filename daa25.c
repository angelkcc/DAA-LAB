#include<stdio.h>

int set[10], x[10];
int n, target;

void subset(int sum, int k)
{
    int i;

    if(sum == target)
    {
        printf("Subset: ");
        for(i = 0; i < k; i++)
        {
            if(x[i] == 1)
                printf("%d ", set[i]);
        }
        printf("\n");
        return;
    }

    if(sum > target || k == n)
        return;

    // Include element
    x[k] = 1;
    subset(sum + set[k], k + 1);

    // Exclude element
    x[k] = 0;
    subset(sum, k + 1);
}

int main()
{
    int i;

    printf("SUBSET SUM USING BACKTRACKING\n");

    printf("Enter number of elements:");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
    }

    printf("Enter target sum:");
    scanf("%d", &target);

    subset(0, 0);

    return 0;
}
