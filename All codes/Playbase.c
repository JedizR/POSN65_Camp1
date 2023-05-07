#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char s1[1000000],s2[1000000],temp[1000000];
int to10based(char s[],int b){
    int l =strlen(s);
    int i,k,n=0;
    for(i=0,k=l-1;i<l;i++,k--){
        if(s[i]-'0'<10){
            n+=(s[i]-'0')*pow(b,k);
        }
        else{
            n+=(s[i]-'A'+10)*pow(b,k);
        }
    }
    return n;
}

void toKbased(int N,int B){
    int n=N,t=0;
    while(n>0){
        int r=n%B;
        n=n/B;
        if(r<10) temp[t++]=r+'0';
        else temp[t++]=r-10+'A';
    }
}

int main()
{
    int k;
    scanf("%d %s %s",&k,s1,s2);
    int n1=to10based(s1,k),n2=to10based(s2,k);
    printf("%d\n",n1+n2);
    toKbased(n1+n2,k);
    int l=strlen(temp),i;
    for(i=l-1;i>=0;i--) printf("%c",temp[i]);
    return 0;
}
