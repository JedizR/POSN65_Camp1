#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char s[100];
int main() {
    int q,i,j,ans;
    scanf("%d",&q);
    while(q--)
    {
        ans=0;
        scanf("%s",s);
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='M')
            {
                ans+=1000;
            }
            else if(s[i]=='D')
            {
                ans+=500;
            }
            else if(s[i]=='C')
            {
                if(s[i+1]=='M')
                {
                    ans+=900;
                    i++;
                }
                else if(s[i+1]=='D')
                {
                    ans+=400;
                    i++;
                }
                else
                    ans+=100;
            }
            else if(s[i]=='L')
            {
                ans+=50;
            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='C')
                {
                    ans+=90;
                    i++;
                }
                else if(s[i+1]=='L')
                {
                    ans+=40;
                    i++;
                }
                else
                    ans+=10;
            }
            else if(s[i]=='V')
            {
                ans+=5;
            }
            else if(s[i]=='I')
            {
                if(s[i+1]=='X')
                {
                    ans+=9;
                    i++;
                }
                else if(s[i+1]=='V')
                {
                    ans+=4;
                    i++;
                }
                else
                    ans+=1;
            }

        }
        printf("%d\n",ans);
    }
    return 0;
}
