#include <stdio.h>
a[800000][100];
int cnt[1000][100];

int main()
{
    int n,i,j,k,l,m,o,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(o=1;o<=9;o++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i][1]!=a[j][2])
            {
                continue;
                for(j=1;j<=n;j++)
                {
                    if(a[j][2]!=a[k][3])
                    {
                        for(k=1;k<=n;k++)
                        {
                            if(a[k][3]==o)
                            {
                                for(l=1;l<=n;l++)
                                {
                                    if(a[l][4]==o)
                                    {
                                        for(m=1;m<=n;m++)
                                        {
                                            if(a[m][5]==o)
                                            {
                                                cnt++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",cnt);
    for(o=1;o<=9;o++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i][1]==o)
            {
                for(j=1;j<=n;j++)
                {
                    if(a[j][2]==o)
                    {
                        for(k=1;k<=n;k++)
                        {
                            if(a[k][3]==o)
                            {
                                for(l=1;l<=n;l++)
                                {
                                    if(a[l][4]==o)
                                    {
                                        for(m=1;m<=n;m++)
                                        {
                                            if(a[m][5]==o)
                                            {
                                                printf("%d %d %d %d %d\n",i,j,k,l,m);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
/*
4
1 3 1 3 1
3 1 3 1 2
2 2 2 2 1
3 4 4 4 3
*/
