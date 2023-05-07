#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
int main()
{
    double q,h1,k1,r1,h2,k2,r2,l,r;
    scanf("%lf",&q);
    while(q--)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&h1,&k1,&r1,&h2,&k2,&r2);
        l=sqrt(pow(h2-h1,2)+pow(k2-k1,2));
        r=r1+r2;
        if(r==l||l==MAX(r1,r2)-MIN(r1,r2)&&r1!=r2&&l!=0)
            printf("One\n");
        else if(r<l||l+MIN(r1,r2)<MAX(r1,r2))
            printf("None\n");
        else if(r>l)
            printf("More\n");
    }
    return 0;
}
