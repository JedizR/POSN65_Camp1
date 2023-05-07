#include <bits/stdc++.h>

using namespace std;

const int MxN =1e3+10;

struct A{
    int idx,val,freq;
    bool operator < (const A &o) const{
        if(freq!=o.freq)
            return freq > o.freq;
        return idx < o.idx;
    }
};

A a[MxN];

map<int,int> mp;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,c;
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        cin>>a[i].val;
        a[i].idx=i;
        mp[a[i].val]++;
    }
    for(int i=1;i<=n;i++){
        a[i].freq=mp[a[i].val];
    }
    sort(a+1,(a+1)+n);
    for(int i=1;i<=n;i++){
        while(mp[a[i].val]--)
            cout<< a[i].val<< " ";
        mp[a[i].val]=0;
    }
    return 0;
}
