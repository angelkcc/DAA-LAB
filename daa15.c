//vertex cover problem
#include <stdio.h>

int main()
{
    int n, m;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &m);

    int u[m], v[m];
    int selected[n];

    // Initialize selected array
    for(int i = 0; i < n; i++)
    {
        selected[i] = 0;
    }

    // Input edges
    for(int i = 0; i < m; i++)
    {
        printf("Enter edge %d (u v): ", i + 1);
        scanf("%d %d", &u[i], &v[i]);
    }

    // Approximation algorithm
    for(int i = 0; i < m; i++)
    {
        if(selected[u[i]] == 0 && selected[v[i]] == 0)
        {
            selected[u[i]] = 1;
            selected[v[i]] = 1;
        }
    }

    // Display Vertex Cover
    printf("\nVertex Cover is: ");

    for(int i = 0; i < n; i++)
    {
        if(selected[i] == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
