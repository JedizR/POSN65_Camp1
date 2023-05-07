#include <bits/stdc++.h>

using namespace std;
int dp[202000];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int m,i,st=1,ansst=1,en,n,sum=0,ma=-1e9;
    cin>>m;
    for(i=1;i<=m;i++){
        cin>>n;
        sum+=n;
        if(ma<sum) ma=sum,en=i,ansst=st;
        if(sum<0) st=i+1,sum=0;
    }
    cout<<ansst<<" "<<en<<"\n"<<ma;
}
