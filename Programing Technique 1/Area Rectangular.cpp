#include <bits/stdc++.h>

using namespace std;

int a[1100][1100];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int r,c,i,j,k,l,q;
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin>>k;
            a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+k;
        }
    }
    cin>>q;
    while(q--){
        cin>>i>>j>>k>>l;
        cout<<a[k+1][l+1]-a[i][l+1]-a[k+1][j]+a[i][j]<<"\n";
    }
    return 0;
}
