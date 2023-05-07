#include <bits/stdc++.h>

using namespace std;

char a[1010][1010];
int dp[1010][1010];

int main(){
    int n,m,i,j,mx=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]=='.'){
                dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            mx=max(mx,dp[i][j]);
        }
    }
    cout<<mx;
    return 0;
}
