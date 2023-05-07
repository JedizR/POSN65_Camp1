#include <stdio.h>
char str[1010];
int main()
{
    int cnt=0,i;
    scanf("%s",str);
    while(str[cnt]!=0)
    {
        cnt++;
    }
    printf("%d\n",cnt);

}
