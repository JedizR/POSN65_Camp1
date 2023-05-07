#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char a[30100][1010];
int main()
{
    int l,n,d=0;
    scanf("%d %d",&l,&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf(" %s",a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i-1][j]!=a[i][j]) d++;
        }
        if(d>2){
            printf("%s",a[i-1]);
            return 0;
        }
        d=0;
    }
    printf("%s",a[n-1]);
    return 0;
}
