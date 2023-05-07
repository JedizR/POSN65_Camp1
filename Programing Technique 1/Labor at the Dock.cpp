#include <bits/stdc++.h>

using namespace std;

const int MxN=1e6+10;
long t[MxN];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int m;
    long long n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>t[i];
    }
    long long l=1,r=1e18;
    while(l<r){
        long long mid=l+(r-l)/2;
        long long sum=0;
        for(int i=1;i<=m;i++){
            sum+=mid/t[i];
            if(sum>=n) break;
        }
        if(sum>=n) r=mid;
        else l=mid+1;
    }
    cout << l;
    return 0;
}
