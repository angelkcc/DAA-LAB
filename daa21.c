//job sequencing with deadlines
#include<stdio.h>

int main()
{
    int n, i, j;
    int profit[100], deadline[100];
    int slot[100];
    int totalProfit = 0;
    int temp;

    printf("JOB SEQUENCING WITH DEADLINE\n");

    printf("Enter number of jobs:");
    scanf("%d", &n);

    printf("Enter profits:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &profit[i]);
    }

    printf("Enter deadlines:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &deadline[i]);
    }

    // Initialize slots
    for(i = 0; i < n; i++)
    {
        slot[i] = -1;
    }

    // Sort jobs by profit (descending)
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(profit[i] < profit[j])
            {
                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;

                temp = deadline[i];
                deadline[i] = deadline[j];
                deadline[j] = temp;
            }
        }
    }

    // Assign jobs to slots
    for(i = 0; i < n; i++)
    {
        for(j = deadline[i] - 1; j >= 0; j--)
        {
            if(slot[j] == -1)
            {
                slot[j] = i;
                totalProfit += profit[i];
                break;
            }
        }
    }

    printf("Maximum Profit = %d", totalProfit);

    return 0;
}
