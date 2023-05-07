#include <stdio.h>
#include <string.h>
char a[100];
int main()
{
    int i,j,k,n;
    scanf("%s",a);
    int ch=1;
    for(i=0,j=n-1;i<n;i++,j--)
    {
        if(a[i]!=a[j])
        {
            ch=0;
            break;
        }
    }
    if(ch==0)
    {
        printf("no");
    }
    else
        printf("yes");

}
