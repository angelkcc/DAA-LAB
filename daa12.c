#include<stdio.h>
void buildheap(int a[])
{
    int n=length[a];
    for (i=0;i<(n/2);i++)
    {

    }
}
int main()
{
     int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[100];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }

    heapsort(a,0,n-1);
    printf("The sorted list is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
