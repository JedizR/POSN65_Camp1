#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char s[1010];
char sub[1000];
void swap(char *a,char *b){
 char temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
int main() {
    int q,i,j,n,k,len,c,l;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%s",s);
        scanf("%d %d",&n,&k);
        len=strlen(s);
        for(i=0;i<len;i+=n)
        {
            c=0;
            while (c < n) {
                sub[c] = s[i+c];
                c++;
            }
            sub[c] = '\0';
            for(l=0;l<k%len;l++)
            {
                for(j=strlen(sub)-1;j>0;j--)
                {
                    swap(&sub[j],&sub[j-1]);
                }
            }
            printf("%s",sub);
        }
        printf("\n");
    }
    return 0;
}
/*
2
abcdefghi
3 1
abcdefghi
3 2
*/
