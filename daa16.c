#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    int job[n], deadline[n], profit[n];
    int slot[n];
    int total_profit = 0;

    // Input jobs
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter Job ID: ");
        scanf("%d", &job[i]);

        printf("Enter Deadline: ");
        scanf("%d", &deadline[i]);

        printf("Enter Profit: ");
        scanf("%d", &profit[i]);
    }

    // Step 1: Sort jobs by profit (descending)
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(profit[i] < profit[j])
            {
                // swap profit
                int temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;

                // swap deadline
                temp = deadline[i];
                deadline[i] = deadline[j];
                deadline[j] = temp;

                // swap job id
                temp = job[i];
                job[i] = job[j];
                job[j] = temp;
            }
        }
    }

    // Initialize slots
    for(int i = 0; i < n; i++)
    {
        slot[i] = -1;
    }

    // Step 2: Schedule jobs
    for(int i = 0; i < n; i++)
    {
        for(int j = deadline[i] - 1; j >= 0; j--)
        {
            if(slot[j] == -1)
            {
                slot[j] = job[i];
                total_profit += profit[i];
                break;
            }
        }
    }

    // Step 3: Display result
    printf("\nSelected Jobs: ");

    for(int i = 0; i < n; i++)
    {
        if(slot[i] != -1)
        {
            printf("J%d ", slot[i]);
        }
    }

    printf("\nTotal Profit = %d", total_profit);

    return 0;
}
