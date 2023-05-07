#include <stdio.h>
#include <string.h>
char a[100];
int main()
{
    int i,alpha=0,ALPHA=0,num=0,spec=0;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            alpha++;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            ALPHA++;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            num++;
        }
        else
        {
            spec++;
        }
    }
    printf("alphabets :  %d\n",alpha);
    printf("ALPHABETS :  %d\n",ALPHA);
    printf("number :  %d\n",num);
    printf("special :  %d\n",spec);
}
