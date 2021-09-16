#include<stdio.h>

int main()
{
    double R, A;
    double pi= 3.141592653;
    scanf("%lf",&R);
    
    if(R>=1 && R<=100)
    {
        A = pi*(R*R);
        printf("%.9lf\n",A);
    }
    
    return 0;
}
