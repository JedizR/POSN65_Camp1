#include <stdio.h>
#include <string.h>

char a[5010];
char b[5010];
char ans[10010];

int main(){
    scanf("%s",a);
    scanf("%s",b);
    int sign=1;
    if(a[0]=='-'){
        sign*=-1;
        strcpy(a,a+1);
    }
    if(b[0]=='-'){
        sign*=-1;
        strcpy(b,b+1);
    }

    int lena=strlen(a);
    int lenb=strlen(b);
    int i,j;
    for(i=lena-1;i>=0;i--){
        int lak=(lena-1)-i;
        int tod=0;
        for(j=lenb-1;j>=0;j--){
            int val=(a[i]-'0')*(b[j]-'0')+tod;
            ans[lak]+=val;
            tod=ans[lak]/10;
            ans[lak]%=10;
            lak++;
        }
        if(tod){
            ans[lak]+=tod;
            tod=ans[lak]/10;
            ans[lak]%=10;
            lak++;
        }
    }
    for(i=10000;i>=0&&ans[i]==0;i--);
    if(i==-1)
        printf("0");
    else{
        if(sign==-1)
            printf("-");
        for(;i>=0;i--)
            printf("%c",ans[i]+'0');
    }
    return 0;
}
