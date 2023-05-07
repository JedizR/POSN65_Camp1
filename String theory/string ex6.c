#include <stdio.h>
#include <string.h>
char a[100],b[100];
int main()
{
    int i,j,k,n;
    scanf("%s",a);
    scanf("%s",b);
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        int cnt=0;
        for(j=0;j<len;j++)
        {
            if(a[j]==b[(j+i)%len])
            {
                cnt++;
            }
        }
        if(cnt==len)
        {
            printf("yes");
            return 0;
        }
    }
    printf("no");
    return 0;

}
