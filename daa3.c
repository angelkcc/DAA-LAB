#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100];
   int key,n;
   int i,flag=0;

   printf("Enter the number of arrays:");
   scanf("%d",&n);
   printf("Enter the numbers to be searched from:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }

   printf("Enter the value to search:");
   scanf("%d",&key);
   for(i=0;i<n;i++)
   {
       if(key==a[i])
       {
           flag=1;
       }
   }
   if(flag==1)
   {
       printf("Search successful");
   }
   else{
    printf("Search unsuccessful");
   }
}
