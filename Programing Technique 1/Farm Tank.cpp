#include <bits/stdc++.h>

using namespace std;

const int MxN=1e5+10;

long long t[MxN];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    long long m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>t[i];
    }
    long long l=1,r=1e18;
    while(l<r){
        long long mid=l+(r-l)/2;
        long long sum=0;
        for(int i=1;i<=n;i++){
            sum+=mid/t[i];
            if(sum>=m) break;
        }
        if(sum>=m) r=mid;
        else l=mid+1;
    }
    cout << l;
    return 0;
}
