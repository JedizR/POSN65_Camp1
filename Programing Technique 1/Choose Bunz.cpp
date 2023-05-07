#include <bits/stdc++.h>

using namespace std;

int a[20000]={1,1},b[20000]={1,1};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,r,k,i,j;
    cin >>n>>r>>k;
    for(i=2;i<=n;i++){
        b[0]=1;
        for(j=1;j<i;j++){
            b[j]=a[j]+a[j-1];
        }
        b[i]=1;
        for(j=0;j<=i;j++){
            a[j]=b[j]%k;
        }
    }
    cout << a[r]%k;
        return 0;
}
