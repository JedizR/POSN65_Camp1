#include <bits/stdc++.h>

using namespace std;
int n,m,si,sj,ei,ej,cnt;
int di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
char a[100][100];


void play(int i,int j){
    if(i==ei&&j==ej){
        cnt++;
        return;
    }
    int ii,jj,k;
    for(k=0;k<4;k++){
        ii=i+di[k];
        jj=j+dj[k];
        if(ii<1||jj<1||ii>n||jj>m) continue;
        if(a[ii][jj]=='#') continue;
        a[i][j]='#';
        play(ii,jj);
        a[i][j]='.';
    }
}

int main(){
    int j,i;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j]; //scanf(" %c",&a[i][j])
            if(a[i][j]=='P'){
                si=i,sj=j;
            }
            if(a[i][j]=='T'){
                ei=i,ej=j;
            }
        }
    }
    play(si,sj);
    cout <<endl<<cnt<<endl;


}

/*
4 5
#.#.#
P....
#.#..
#...T
*/
