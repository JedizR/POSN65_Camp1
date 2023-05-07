#include <stdio.h>
int a[1010];
int main()
{
    int n,i,ch,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&ch);
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
        if(a[i]==ch)
            cnt++;
    }
    printf("\n%d",cnt);
    return 0;
}
