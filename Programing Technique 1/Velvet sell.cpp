#include <bits/stdc++.h>

using namespace std;

const int MxN=1e5+10;

int a[MxN];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    while(q--){
        int val;
        cin>>val;
        cout<<lower_bound(a+1,a+1+n,val)-(a+1)<<"\n";
    }
    return 0;
}
