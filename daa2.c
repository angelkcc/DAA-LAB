#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,n,i;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("%d\t%d\t",a,b);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
   return 0;
}
