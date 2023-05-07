#include <bits/stdc++.h>

using namespace std;
int tab[100005];
int main(){
    int i,n,a,b,q,m,k;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>a>>b;
        tab[a]++,tab[b+1]--;
    }
    for(i=1;i<=n;i++){
        tab[i]+=tab[i-1];
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>k;
        cout<<tab[k]<<"\n";
    }
    return 0;
}
