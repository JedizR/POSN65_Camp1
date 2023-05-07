#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char str[110];
char ans[1100];
int main()
{
    int i,j;
    gets(str);
    int n=strlen(str);
    int dir=1;
    /*for(i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }*/
    for(i=0;i<n;i++)
    {
        if(str[i]=='N')
        {
            while(dir!=1)
            {
                strcat(ans,"R");
                if(dir!=4)
                    dir++;
                else
                    dir=1;
            }
            strcat(ans,"F");
        }
        else if(str[i]=='E')
        {
            while(dir!=2)
            {
                strcat(ans,"R");
                if(dir!=4)
                    dir++;
                else
                    dir=1;
            }
            strcat(ans,"F");
        }

        else if(str[i]=='W')
        {
            while(dir!=4)
            {
                strcat(ans,"R");
                if(dir!=4)
                    dir++;
                else
                    dir=1;
            }
            strcat(ans,"F");
        }
        else if(str[i]=='S')
        {
            while(dir!=3)
            {
                strcat(ans,"R");
                if(dir!=4)
                    dir++;
                else
                    dir=1;
            }
            strcat(ans,"F");
        }
        else if(str[i]=='Z')
        {
            dir=1;
            strcat(ans,"Z");
        }
    }
    for(i=0;i<strlen(ans);i++)
    {
        printf("%c",ans[i]);
    }
    return 0;
}
