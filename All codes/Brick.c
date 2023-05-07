#include <stdio.h>
char c[100][100];
int a[100][100],b[100];

int main()
{
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf(" %c",&c[i][j]);
            if(c[i][j]=='.')
                a[i][j]=0;
            if(c[i][j]=='O')
                a[i][j]=-1;
        }
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((a[j+1][i]==-1||j==n)&&a[j][i]!=-1&&a[1][i]!=-1)
            {
                a[j][i]=b[i];
                if(b[i]!=0)
                {
                    for(k=0;k<a[j][i];k++)
                    {
                        if(j-k<1)
                            break;
                        a[j-k][i]=b[i];
                        b[i]--;
                    }
                }
                break;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]==-1)
                printf("O");
            else if(a[i][j]==0)
                printf(".");
            else
                printf("#");
        }
        printf("\n");
    }
    /*for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/
}

/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0
*/
