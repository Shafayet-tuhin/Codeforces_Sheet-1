#include <stdio.h>
main()
{
    long long int A,B,C,D,X;
    scanf("%lld %lld %lld %lld", &A,&B,&C,&D);
    X=(A*B)-(C*D);
    printf("Difference = %lld\n", X);
    return 0;
}
