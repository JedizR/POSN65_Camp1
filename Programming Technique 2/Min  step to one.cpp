#include <bits/stdc++.h>

using namespace std;

int dp[1000100];
int main(){
    int n,i,q;
    for(i=2;i<=1e6;i++){
        dp[i]=dp[i-1]+1;
        if(i%2==0){
            if(dp[i/2]+1<dp[i]){
                dp[i]=dp[i/2]+1;
            }
        }
        if(i%3==0){
            if(dp[i/3]+1<dp[i]){
                dp[i]=dp[i/3]+1;
            }
        }
    }
    cin>>q;
    while(q--){
        cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}
