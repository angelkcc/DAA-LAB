#include<stdio.h>
#include<conio.h>
#include<math.h>
int binarysearch(int a[10],int low,int high,int key)
{
    int mid;
    if(low==high)
    {
        if(key==a[low])
           {
             return low;
           }
        else{
            return -1;
        }
    }
    else{
        mid=floor((low+high)/2);
        if(key==a[mid])
        {
            printf("Search successful at position:%d",mid);
        }
        else if(key<a[mid])
            {
                binarysearch(a,low,mid-1,key);
        }
        else{
             binarysearch(a, mid+1,high,key);
        }
    }
}
int main()
{
    int a[100],high,low,key,n;
    printf("Enter the number of array:");
    scanf("%d",&n);
    printf("Enter the data in ascending order:");
    for(int i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    binarysearch(a,0,n-1,key);
}
