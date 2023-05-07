#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char s1[500][500];
int main()
{
    int d1,d2,i,j;
    scanf("%d %d",&d1,&d2);
    for(i=0;i<3;i++)
    {
        for(j=0;j<d1*3;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
