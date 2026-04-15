#include<stdio.h>
#include<conio.h>

void merge(int a[],int l,int mid,int h)
{
    int temp[100];
    int k=l;
    int i=l;
    int j=mid+1;
    while(i<=mid&&j<=h)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i=i+1;
            k=k+1;

        }
        else{
            temp[k]=a[j];
            j=j+1;
            k=k+1;
        }
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        i=i+1;
        k=k+1;
    }
    while(j<=h)
    {
        temp[k]=a[j];
        j=j+1;
        k=k+1;
    }
     for(i = l; i <= h; i++)
    {
        a[i] = temp[i];
    }
}
void mergesort(int a[50], int l, int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
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

    mergesort(a,0,n-1);
    printf("The sorted list is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
