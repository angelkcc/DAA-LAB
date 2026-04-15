//prims algorithm
#include<stdio.h>

int main()
{
    int n, i, j;
    int cost[10][10];
    int visited[10];
    int min, a, b;
    int totalCost = 0;

    printf("PRIM'S ALGORITHM\n");

    printf("Enter number of vertices:");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);

            if(cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    for(i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    visited[0] = 1;

    for(i = 0; i < n - 1; i++)
    {
        min = 999;

        for(j = 0; j < n; j++)
        {
            if(visited[j] == 1)
            {
                int k;
                for(k = 0; k < n; k++)
                {
                    if(visited[k] == 0 && cost[j][k] < min)
                    {
                        min = cost[j][k];
                        a = j;
                        b = k;
                    }
                }
            }
        }

        printf("Edge %d-%d Cost=%d\n", a, b, min);

        totalCost += min;
        visited[b] = 1;
    }

    printf("Total Cost = %d", totalCost);

    return 0;
}
