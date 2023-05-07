#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char s[10];
int main() {
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%s",s);
        int n = atoi(s),cnt=0;
        for(j=0;j<strlen(s);j++)
            cnt+=pow(s[j]-'0',j+1);
        if(cnt==n) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
