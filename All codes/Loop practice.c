#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    int w=n+1;
    while(w---1)
    {
        printf("%d ",w);
    }
    printf("\n");
    w=2;
    do
    {
        if(n<2)
            break;
        printf("%d ",w);
        w+=2;
    }
    while(w<=n);
    printf("\n");
    for(i=n;i>=2;i--)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    printf("\n");
    w=1;
    while(w<=n)
    {
        printf("%d ",w);
        w+=2;
    }
    printf("\n");
    w=n+1;
    while(w---1)
    {
        if(w%2!=0)
            printf("%d ",w);
    }
    printf("\n");
    return 0;
}
