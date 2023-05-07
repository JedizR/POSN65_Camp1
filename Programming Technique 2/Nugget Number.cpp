#include <bits/stdc++.h>

using namespace std;

int dp[110];

int main(){
    int i,n;
    dp[0]=1;
    for(i=6;i<=100;i++){
        if(i>=6&&dp[i-6]==1) dp[i]=1;
        if(i>=9&&dp[i-9]==1) dp[i]=1;
        if(i>=20&&dp[i-20]==1) dp[i]=1;
    }
    cin>>n;
    if(n<6){
        cout<<"no";
        return 0;
    }
    for(i=6;i<=n;i++){
        if(dp[i]) cout<<i<<endl;
    }
    return 0;
}
