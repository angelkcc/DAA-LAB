//fractional knapsack
#include<stdio.h>

int main()
{
    int n, i, j;
    float capacity;
    float profit[100], weight[100], ratio[100];
    float totalProfit = 0, temp;

    printf("FRACTIONAL KNAPSACK\n");

    printf("Enter number of items:");
    scanf("%d", &n);

    printf("Enter profits:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &profit[i]);
    }

    printf("Enter weights:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &weight[i]);
    }

    printf("Enter capacity of knapsack:");
    scanf("%f", &capacity);

    // Calculate ratio
    for(i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    // Sort by ratio (descending)
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(ratio[i] < ratio[j])
            {
                // swap ratio
                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                // swap profit
                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;

                // swap weight
                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;
            }
        }
    }

    // Take items
    for(i = 0; i < n; i++)
    {
        if(capacity >= weight[i])
        {
            totalProfit += profit[i];
            capacity -= weight[i];
        }
        else
        {
            totalProfit += ratio[i] * capacity;
            break;
        }
    }

    printf("Total Profit Earned = %.2f", totalProfit);

    return 0;
}
