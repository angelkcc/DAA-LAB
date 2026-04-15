#include<stdio.h>
#include<math.h>
int min,max;
int maxmin(int a[],int low,int high)
{
    int mid;
    if(low==high)
    {
        if(a[low]<min)
            min=a[low];
        if(a[low]>max)
            max=a[low];
        return 0;
    }
    else if(low==high-1)
    {
        if(a[low]<a[high])
        {
            if(a[low]<min)
                min=a[low];
            if(a[high]>max)
                max=a[high];
        }
        else{
            if(a[high]<min)
                min=a[high];
            if(a[low]>max)
                max=a[low];
        }
        return 0;
    }
    else
    {
        mid=(low+high)/2;
        maxmin(a,low,mid);
        maxmin(a,mid+1,high);
    }
    return 0;
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
    min=max=a[0];
    maxmin(a,0,n-1);
    printf("Minimum element=%d\n",min);
    printf("Maximum element=%d\n",max);
    return 0;
}
