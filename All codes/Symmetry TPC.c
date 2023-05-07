#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
int a[1010];
int qs[1010];

int main()
{
    int t,n,i,j,k,mx=0,ch=0;
    scanf("%d",&t);
    while(t--)
    {
        memset(qs,0,100);
        mx=0;
        ch=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        a[n]=1;
        n++;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
                qs[i]=0;
            if(a[i]==0)
                qs[i]=qs[i-1]+1;
        }

        for(i=0;i<n;i++)
        {
            if(qs[i]%2!=0)
            {
                mx=MAX(mx,qs[i]);
            }
            if(qs[i]==0&&i!=0)
            {
                if(qs[i-1]%2!=0)
                {
                    ch=qs[i-1];
                }
            }
        }
        /*for(i=0;i<n;i++)
        {
            printf("%d ",qs[i]);

        }
        printf("\n");*/
        for(i=0;i<n;i++)
        {
            if(ch==0)
            {
                printf("-1\n");
                break;
            }
            if(qs[i]==mx)
            {
                printf("%d\n",i-qs[i]/2);
                break;
            }

        }

    }
    return 0;
}
/*
4
12
1 0 0 0 1 0 0 0 0 0 1 1
12
0 0 0 1 0 0 0 1 0 0 0 0
12
1 1 1 0 1 1 1 0 1 1 1 1
12
0 0 1 1 0 0 1 1 0 0 0 0
*/



