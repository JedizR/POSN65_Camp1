#include <stdio.h>
#include <string.h>
char a[100];
int main()
{
    int i;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            if(a[i]>='n')
                a[i]-=13;
            else
                a[i]+=13;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            if(a[i]>='N')
                a[i]-=13;
            else
                a[i]+=13;
        }
        else
        {
            printf("You type special character!!");
        }
    }
    printf("%s",a);
}
