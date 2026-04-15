#include<stdio.h>

int main()
{
    int a, b;
    int r1, r2, r;
    int s1 = 1, s2 = 0, s;
    int t1 = 0, t2 = 1, t;
    int q;

    printf("EXTENDED EUCLIDEAN ALGORITHM\n");

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    r1 = a;
    r2 = b;

    printf("\nq\tr1\tr2\tr\ts1\ts2\ts\tt1\tt2\tt\n");

    while(r2 != 0)
    {
        q = r1 / r2;

        r = r1 - q * r2;
        s = s1 - q * s2;
        t = t1 - q * t2;

        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               q, r1, r2, r, s1, s2, s, t1, t2, t);

        r1 = r2;
        r2 = r;

        s1 = s2;
        s2 = s;

        t1 = t2;
        t2 = t;
    }

    printf("\nGCD = %d\n", r1);
    printf("s = %d, t = %d\n", s1, t1);

    return 0;
}
