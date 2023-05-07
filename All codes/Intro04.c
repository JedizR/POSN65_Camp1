#include <stdio.h>

int main()
{
    double d,r,t,f,i=0;
    scanf("%lf %lf %lf %lf",&d,&r,&t,&f);
    printf("%.2lf",d*f/(t-r));
    return 0;
}
