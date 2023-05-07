#include <bits/stdc++.h>

using namespace std;

int dp[1010][1010];

int main(){
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cin>>dp[i][j];
        }
    }
    for(i=n;i>=0;i--){
        for(j=0;j<=i;j++){
            dp[i][j]+=max(dp[i+1][j],dp[i+1][j+1]);
        }
    }
    cout<<dp[0][0];
    return 0;
}
