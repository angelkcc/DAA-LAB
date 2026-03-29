#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a[100],i,j,max,min,n;
    printf("Enter the number of array:");
    scanf("%d",&n);
    printf("Enter the data:");
    for(int i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Minimum:%d\n",min);
    printf("Maximum:%d\n",max);
    return 0;

}
