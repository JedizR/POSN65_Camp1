#include <stdio.h>
#include <stdlib.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
int a[50][50];
int r[50][50];

int main()
{
    int q,h,w,i,j,mx=-1,ch=0;
    scanf("%d",&q);
    while(q--)
    {
        mx=-1;
        ch=0;
    scanf("%d %d",&h,&w);
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            if(i!=h-1&&j!=w-1)
            {
                if(abs(a[i][j]-a[i][j+1])<=10)
                    r[i][j]=a[i][j]+a[i][j+1];
                if(abs(a[i][j]-a[i+1][j])<=10&&a[i+1][j]+a[i][j]>r[i][j])
                    r[i][j]=a[i][j]+a[i+1][j];
            }
            if(i==h-1&&j==w-1)
            {
                r[i][j]=0;
            }
            if(i==h-1)
            {
                if(abs(a[i][j]-a[i][j+1])<=10)
                    r[i][j]=a[i][j]+a[i][j+1];
            }
            if(j==w-1)
            {
                if(abs(a[i][j]-a[i+1][j])<=10)
                    r[i][j]=a[i][j]+a[i+1][j];
            }
        }
    }
    /*for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }*/
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            mx=MAX(mx,r[i][j]);
        }
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            if(r[i][j]==mx)
            {
                printf("%d %d\n",i+1,j+1);
                ch=1;
                break;
            }
        }
        if(ch==1)
        {
            break;
        }
    }
    }
    return 0;
}
/*
2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
4 4
0 0 0 0
0 0 0 0
0 1 1 1
1 1 0 0
*/
