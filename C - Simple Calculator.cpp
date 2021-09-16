#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,e,f;
    scanf("%lld %lld",&a,&b);
    c=a+b;
    d=a*b;
    e=a-b;
    printf("%lld + %lld = %lld\n%lld * %lld = %lld\n%lld - %lld = %lld\n",a,b,c,a,b,d,a,b,e);
    return 0;
}
