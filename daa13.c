//string editing
#include<stdio.h>
#include<string.h>
//function to find minimum of three numbers
int minimum(int a,int b,int c)
{
    if(a<=b && a<=c)
        return a;
    else if(b<=a && b<=c)
        return b;
    else
        return c;
}
int edit_distance(char str1[50],char str2[50])
{
    int m=strlen(str1);
    int n=strlen(str2);
    int dp[50][50];
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+minimum(dp[i][j-1], //insert
                                   dp[i-1][j], //delete
                                   dp[i-1][j-1]); //replace
        }
    }
    return dp[m][n];
}
int main()
{
    char str1[50]="sunday";
    char str2[50]="saturday";
    int result= edit_distance(str1,str2);
    printf("STRING EDITING\n");
    printf("Minimum edit distance=%d\n",result);
    return 0;
}

