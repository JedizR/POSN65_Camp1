#include <bits/stdc++.h>

using namespace std;

const int MxN=1e5+10;

int a[MxN];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--){
        int val;
        cin>>val;
        cout<<upper_bound(a,a+n,val)-a<<"\n";
    }
    return 0;
}
