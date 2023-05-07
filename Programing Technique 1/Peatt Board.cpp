#include <bits/stdc++.h>

using namespace std;

int dp[1010][1010];

int main(){
    int w,h,n,a,b,c,d,i,j;
    cin>>w>>h>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        dp[b][a]++,dp[d+1][a]--,dp[b][c+1]--,dp[d+1][c+1]++;
    }
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
    }
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            cout << dp[i][j]%2;
        }
        cout << endl;
    }
}
