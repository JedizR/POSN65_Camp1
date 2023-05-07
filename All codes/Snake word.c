#include <stdio.h>
#include <ctype.h>
#include <string.h>
int di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
char a[1000][1000],s[1000];
int cnt,m,n;
void play(int i,int j,int idx){
    if(idx<=strlen(s)){
        printf("%d",idx);
        return;
    }
    int k;
    idx++;
    for(k=0;k<4;k++)
    {
        int ii,jj;
        ii=i+di[k],jj=j+dj[k];
        if(ii>m||jj>n||ii<1||jj<1) continue;
        if(a[ii][jj]!=s[idx]) continue;
        play(ii,jj,idx+1);
    }
    /*
    //up
    if(i-1>=0&&a[i-1][j]=='*'){
        play(i-1,j);
    }
    //down
    if(i+1<h&&a[i+1][j]=='*'){
        play(i+1,j);
    }
    //left
    if(j-1>=0&&a[i][j-1]=='*'){
        play(i,j-1);
    }
    //right
    if(j+1<w&&a[i][j+1]=='*'){
        play(i,j+1);
    }*/
}

int main()
{
    int i,j,q;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%s",s);
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                if(tolower(a[i][j])==tolower(s[1])){
                    play(i,j,0);
                }
            }
        }
    }
    return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
2
PEATT
HELLOWORLD
*/
