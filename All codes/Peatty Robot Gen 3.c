#include <stdio.h>
#include <string.h>

char a[1000];
int main()
{
    scanf(" %s",a);
    int len=strlen(a);
    int k;
    scanf("%d",&k);
    int n=0,e=0,w=0,s=0;
    int i;
    for(i=0;i<len;i++){
        if(a[i]=='N')
            n++;
        else if(a[i]=='E')
            e++;
        else if(a[i]=='W')
            w++;
        else if(a[i]=='S')
            s++;
    }
    int max_pair=0;
    int min_pair=0;

    if(n>s)
        max_pair+=n,min_pair+=s;
    else
        max_pair+=s,min_pair+=n;
    if(e>w)
        max_pair+=e,min_pair+=w;
    else
        max_pair+=w,min_pair+=e;
    int mn=min_pair;
    if(mn>k)
        mn=k;
    min_pair-=mn;
    k-=mn;
    printf("%d",2*(max_pair-min_pair-k));
    return 0;
}
