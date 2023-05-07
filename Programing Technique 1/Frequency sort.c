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
    int n,c;
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        cin
    }
}

