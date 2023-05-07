#include <bits/stdc++.h>

using namespace std;
int a[1010][1010],b[1010][1010];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int x,y,K,i,xx,yy,j;
    cin>>x>>y>>K;
    a[0][0]=1;
    for(i=0;i<K;i++){
        cin>>xx>>yy;
        b[xx][yy]=1;
    }
    for(i=0;i<=x;i++){
        for(j=0;j<=y;j++){
            if(b[i][j]!=1){
                xx=(i-1>=0)?a[i-1][j]:0;
                yy=(j-1>=0)?a[i][j-1]:0;
                a[i][j]+=(xx+yy)%1000000;
            }
            else a[i][j]=0;
        }
    }
    printf((a[x][y]!=0)?"%d\n":"0\n",a[x][y]);
    return 0;
}
