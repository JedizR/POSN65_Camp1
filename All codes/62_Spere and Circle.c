#include <stdio.h>
#include <math.h>

int main()
{
    double r;
    scanf("%lf",&r);
    printf("%.3lf\n",4*M_PI*pow(r,2));
    printf("%.3lf\n",4*M_PI*pow(r,3)/3);
    printf("%.3lf\n",M_PI*pow(r,2));
    printf("%.3lf\n",2*M_PI*r);
}
