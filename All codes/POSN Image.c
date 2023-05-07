#include <stdio.h>

int main()
{
    int q,i,j;
    double n;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%lf",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==1||i==ceil(n/2)||j==1||i<ceil(n/2)&&j==n)
                    printf("*");
                else
                    printf("-");
            }
            printf("-");
            for(j=1;j<=n;j++)
            {
                if(i==1||j==1||i==n||j==n)
                    printf("*");
                else
                    printf("-");
            }
            printf("-");
            for(j=1;j<=n;j++)
            {
                if(i==1||i==n||i==ceil(n/2)||i<ceil(n/2)&&j==1||i>ceil(n/2)&&j==n)
                    printf("*");
                else
                    printf("-");
            }
            printf("-");
            for(j=1;j<=n;j++)
            {
                if(j==1||j==n||i==j)
                    printf("*");
                else
                    printf("-");
            }
            printf("\n");
        }
    }
}
