#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n;
    int temp;
    printf("Enter the number of array:");
    scanf("%d",&n);

    printf("Enter the number to be sorted:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
