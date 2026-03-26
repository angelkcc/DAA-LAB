#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,r;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("The gcd is %d",a);
    return 0;
}
