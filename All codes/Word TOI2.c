#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char s[10000][10000],t[10000],c[10000];
const int di[8]={1,-1,0,-1,1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1},cnt=0;
int main()
{
    int m,n,k,i,j,l,ch=0,cnt=0,o;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%s",t);
        for(j=0;j<n;j++)
        {
            s[i][j]=tolower(t[j]);
        }
    }
    scanf("%d",&k);
    while(k--)
    {
        scanf("%s",c);
        int len=strlen(c);
        for(i=0;i<len;i++)
        {
            c[i]=tolower(c[i]);
        }
        printf("%s\n",c);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                ch=0;
                for(o=0;o<8;o++)
                {
                    cnt=0;
                    for(l=0;l<len;l++)
                    {
                        if(c[l]!=s[i+di[o]][j+dj[o]])
                        {
                            cnt++;
                        }
                        else
                            cnt=-len;
                    }
                    if(cnt>=len-1)
                    {
                        ch=1;
                        break;
                    }

                }
                if(ch==1)
                {
                    printf("%d %d\n",i,j);
                    break;
                }
            }
        }
    }
    /*for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c",s[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}
/*
4 4
aaaa
aafa
aaea
aada
1
fed
8 11
ascDEFGhigg
hTqkComPutk
FayUcompuTm
FcsierMqsrc
bkoArUePeyv
Klcbqwekumk
sreTNIophtb
yUiqlxcnBje
4
Compute
Queue
stack
Pointer
*/
