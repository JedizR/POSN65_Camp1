#include <stdio.h>

int main()
{
    int q,n,i,j,x;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        x=2*n+1;
        for(i=1;i<=x;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i%2!=0||j==1)
                    printf("*");
                else
                    printf("-");
            }
            for(j=i;j<=x-1;j++)
            {
                if(j%2!=1||i==1)
                    printf("*");
                else
                    printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}
