#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char l[1000]="",r[1000]="",sub[1000],temp[1000];
int main()
{
    int o,n,i;
    char c,h;
    scanf("%d",&o);
    while(o--)
    {
        scanf(" %c",&c);
        if(c=='q')
        {
            if(l[0]=='\0'&&r[0]=='\0')
            {
                printf("- -\n");
            }
            else if(l[0]=='\0')
            {
                printf("- %s\n",r);
            }
            else if(r[0]=='\0')
            {
                printf("%s -\n",l);
            }
            else
            {
                printf("%s %s\n",l,r);
            }
        }
        else if(c=='p')
        {
            scanf(" %c",&h);
            if(h=='L')
                scanf("%s",l);
            else if(h=='R')
                scanf("%s",r);

        }
        else if(c=='b')
        {
            scanf(" %c",&h);
            if(h=='L')
            {
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    sub[i] = l[i];
                }
                sub[i] = '\0';
                for(i=n;i<strlen(r);i++)
                {
                    temp[i-n] = l[i];
                }
                temp[i-n] = '\0';
                strcpy(l,sub);
                sub[0]='\0';
            }

            else if(h=='R')
            {
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    sub[i] = r[i];
                }
                sub[i] = '\0';
                for(i=n;i<strlen(r);i++)
                {
                    temp[i-n] = r[i];
                }
                temp[i-n] = '\0';
                strcpy(r,sub);
                sub[0]='\0';
            }
        }
        else if(c=='r')
        {
            if(h=='L')
            {
                strcat(l,temp);
                temp[0]='\0';
            }
            else if(h=='R')
            {
                strcat(r,temp);
                temp[0]='\0';
            }
        }
        else if(c=='c')
        {
            scanf(" %c",&h);
            if(h=='L')
            {
                strcat(l,r);
                strcpy(r,"");
            }
            else if(h=='R')
            {
                strcat(r,l);
                strcpy(l,"");
            }
        }

    }
    return 0;
}
/*
14
q
p L peat
p R teap
q
c L
q
b L 4
q
r
q
b L 4
p R teap
c R
q
*/
