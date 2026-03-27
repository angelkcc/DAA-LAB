#include<stdio.h>
int main()
{
    int i;
    int a[100],n;
    int temp;
    printf("Enter the number of array:");
    scanf("%d",&n);

    printf("Enter the number to be sorted:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int k=1;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
