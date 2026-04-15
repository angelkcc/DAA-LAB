//floydd warshall
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int dist[n][n];

    printf("Enter adjacency matrix:\n");
    printf("(Use 999 for infinity)\n");

    // Input matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &dist[i][j]);
        }
    }

    // Floyd-Warshall Algorithm
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Display result
    printf("\nShortest distance matrix:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", dist[i][j]);
        }
        printf("\n");
    }

    return 0;
}
