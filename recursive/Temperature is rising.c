#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
int a[1000][1000];
int m,mx;
void play(int i,int j){
    mx=MAX(mx,a[i][j]);
    //up
    if(i-1>=1&&a[i-1][j]>a[i][j]){
        play(i-1,j);
    }
    //down
    if(i+1<=m&&a[i+1][j]>a[i][j]){
        play(i+1,j);
    }
    //left
    if(j-1>=1&&a[i][j-1]>a[i][j]){
        play(i,j-1);
    }
    //right
    if(j+1<=m&&a[i][j+1]>a[i][j]){
        play(i,j+1);
    }
}

int main()
{
    int i,j,x,y;
    scanf("%d %d %d",&m,&x,&y);
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==100) a[i][j]=-10;
        }
    }
    play(y,x);
    printf("%d",mx);
    return 0;
}

/*
4
2 1
100 1 3 8
0 2 1 4
2 3 5 100
0 8 8 100
*/
/*
5
4 2
0 1 100 100 100 0
100 2 3 1 1
100 100 4 5 100
8 7 100 6 100
7 100 100 100 9
*/
