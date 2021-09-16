#include<stdio.h>
main()
{
    long long int A,B,r1,r2,sum;
    scanf("%lld %lld",&A,&B);
    if((A>=0 && A<=9) && (B>=0 && B<9))
    {
        sum = A + B;
        printf("%lld\n", sum);
    }
    else
    {
        r1 = A % 10;
        r2 = B % 10;
        sum = r1 + r2;
        printf("%lld\n", sum);
    }
    return 0;
}
