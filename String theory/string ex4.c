#include <stdio.h>
#include <string.h>
char a[100][100];
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %s",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int c;
            c=strcmp(a[i],a[j]);
            if(c==1)
            {
                char temp[100];
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }

}
