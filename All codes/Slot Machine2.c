#include <stdio.h>
int a[20][5],ans[800000][5];
int main()
{
    int n,i,j,cnt=0,k,l,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                for(l=0;l<n;l++)
                    for(m=0;m<n;m++)
                        if(a[i][0]==a[j][1]&&a[i][0]==a[k][2]&&a[i][0]==a[l][3]&&a[i][0]==a[m][4])
                        {
                            ans[cnt][0]=i;
                            ans[cnt][1]=j;
                            ans[cnt][2]=k;
                            ans[cnt][3]=l;
                            ans[cnt][4]=m;
                            cnt++;
                        }
    printf("%d\n",cnt);
    for(i=0;i<cnt;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ",ans[i][j]+1);
        printf("%d\n",ans[i][j]+1);
    }
    return 0;
}
