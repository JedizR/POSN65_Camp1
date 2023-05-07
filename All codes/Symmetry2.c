#include <stdio.h>
int a[1010], from_front[1010],from_back[1010];
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n,i;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        from_back[n+1]=0;
        for(i=1;i<=n;++i)
        {
            if(a[i]==0)
                from_front[i]= from_front[i-1]+1;
            else
                from_front[i]=0;
        }
        for(i=n;i>=1;--i)
        {
            if(a[i]==0)
                from_back[i]=from_back[i+1]+1;
            else
                from_back[i]=0;
        }
        int answer = -1,maxx=0;
        for(i=1;i<=n;++i)
        {
            if(from_back[i]==from_front[i]&&maxx<from_back[i])
            {
                maxx=from_back[i];
                answer=i-1;
            }
        }
        printf("%d\n",answer);
    }
    return 0;
}
