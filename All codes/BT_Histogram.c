#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int a[10100];
int cnt[10100];

int main()
{
    int n,i,j,mx=0,mxc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        mx=MAX(mx,a[i]);
    }
    for(i=1;i<=mx;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
                cnt[i]++;
        }
        mxc=MAX(mxc,cnt[i]);
    }
    for(i=1;i<=mxc;i++)
    {
        for(j=1;j<=mx;j++)
        {
            if(mxc-i<cnt[j])
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }


    /*for(i=1;i<=mx;i++)
    {
        printf("%d",cnt[i]);
    }
    printf("\n%d",mxc);*/

}
/*
12
2 5 7 7 1 4 11 1 6 9 5 7
*/
