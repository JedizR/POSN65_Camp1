#include <bits/stdc++.h>

using namespace std;

const int MxN=1e6+10;

int a[MxN];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l=1,r=2e9;
    while(l<r){
        int mid=l+(r-l+1)/2;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=max(0,a[i]-mid);
            if(sum>=m) break;
        }
        if(sum>=m) l=mid;
        else r=mid-1;
    }
    cout << l;
    return 0;
}

