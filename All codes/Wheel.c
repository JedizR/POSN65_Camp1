#include <stdio.h>
int a[110],b[21];

int main()
{
    int n,k,i,go,now=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&go);
        while(go)
        {
            if(a[now])
                go--;
            now++;
            now%=n;;
        }
        while(!a[now])
        {
            now++;
            now%=n;
        }
        b[i%k]+=a[now];
        a[now]=0;

    }
    for(i=0;i<k;i++)
        printf("%d\n",b[i]);
    return 0;
}
