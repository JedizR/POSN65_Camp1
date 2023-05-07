#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c,s,area,l;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    l=sqrt(area/sqrt(3));
    printf("%.2lf %.2lf %.2lf",2*l,l,sqrt(3)*l);
}
