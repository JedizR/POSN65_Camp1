#include <stdio.h>
#include <string.h>
char a[100];
int main()
{
    char t;
    int i,cnt=0;
    scanf("%s %c",a,&t);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==t)
        {
            cnt++;
        }

    }
    printf("%c:%d\n",t,cnt);
}
