#include<stdio.h>

int parent[10];

int find(int i)
{
    while(parent[i])
        i = parent[i];
    return i;
}

void unite(int i, int j)
{
    parent[j] = i;
}

int main()
{
    int n, e, i, j;
    int u[20], v[20], w[20];
    int totalCost = 0;
    int temp;

    printf("KRUSKAL'S ALGORITHM\n");

    printf("Enter number of vertices:");
    scanf("%d", &n);

    printf("Enter number of edges:");
    scanf("%d", &e);

    printf("Enter edges (u v weight):\n");

    for(i = 0; i < e; i++)
    {
        scanf("%d %d %d", &u[i], &v[i], &w[i]);
    }

    // Sort edges by weight
    for(i = 0; i < e - 1; i++)
    {
        for(j = i + 1; j < e; j++)
        {
            if(w[i] > w[j])
            {
                temp = w[i];
                w[i] = w[j];
                w[j] = temp;

                temp = u[i];
                u[i] = u[j];
                u[j] = temp;

                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
        parent[i] = 0;

    for(i = 0; i < e; i++)
    {
        int x = find(u[i]);
        int y = find(v[i]);

        if(x != y)
        {
            printf("Edge %d-%d Cost=%d\n", u[i], v[i], w[i]);
            totalCost += w[i];
            unite(x, y);
        }
    }

    printf("Total Cost = %d", totalCost);

    return 0;
}
