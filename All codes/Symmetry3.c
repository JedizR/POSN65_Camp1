#include <stdio.h>

int a[1010];

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n;
        scanf("%d",&n);
        int idx=0,mx=0;
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        a[n]=1;
        int cnt=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                if(cnt>mx&&cnt%2==1)
                {
                    idx=i-cnt/2-1;
                    mx=cnt;
                }
                cnt=0;
                continue;
            }
            cnt++;
        }
        if(mx==0)
            printf("-1\n");
        else
            printf("%d\n",idx);
    }
    return 0;
}
