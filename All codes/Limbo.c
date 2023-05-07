#include <stdio.h>
char a[1000][1000];
int cnt,h,w;
void play(int i,int j){
    a[i][j]='.';
    cnt++;
    int k,ii,jj;
    for(k=0;k<4;k++){
        ii=i+di[k],jj=j+dj[k];
        if(ii<0||jj<0||ii>=h||jj>=w) continue;
        if(a[ii][jj]!='*') continue;
        play(ii,jj);
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
    int mx=0,i,j;
    scanf("%d %d",&w,&h);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(a[i][j]=='*'){
                cnt=0;
                play(i,j);
                if(cnt>mx){
                    mx=cnt;
                }
            }
        }
    }
    printf("%d",mx);
    return 0;
}
/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***
*/
