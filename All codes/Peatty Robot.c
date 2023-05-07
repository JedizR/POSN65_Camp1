#include <stdio.h>
#include <string.h>
char str[110];
int main()
{
    int x=0,y=0,i;
    scanf("%s",str);
    int n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='N')
            y++;
        if(str[i]=='E')
            x++;
        if(str[i]=='W')
            x--;
        if(str[i]=='S')
            y--;
        if(str[i]=='Z')
            y=0,x=0;
    }
    printf("%d %d",x,y);
    return 0;
}
