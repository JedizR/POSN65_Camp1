#include <bits/stdc++.h>

using namespace std;

int dp[550][500];

int main(){
    int n,m,i,j,mn,ans=100000;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>dp[i][j];
        }
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<=m;j++){
                if(j==1) dp[i][j]+=min(dp[i+1][j],dp[i+1][j+1]);
                else if(j==m) dp[i][j]+=min(dp[i+1][j],dp[i+1][j-1]);
                else dp[i][j]+=min(dp[i+1][j],min(dp[i+1][j-1],dp[i+1][j+1]));
        }
    }
    for(j=1;j<=m;j++){
        ans=min(ans,dp[1][j]);
    }
    cout<<ans;
}
/*
5 6
3 6 1 7 2 3
4 7 9 5 2 1
3 3 3 9 9 8
7 5 7 5 8 9
2 4 1 3 7 1
*/
