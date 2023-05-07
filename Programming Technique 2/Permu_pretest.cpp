#include <bits/stdc++.h>

using namespace std;

int a[1010];

int n,k;

void permu(int st){
    if(st==n){
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<"\n";
        return;
    }
    for(int i=1;i<=k;i++){
        a[st]=i;
        permu(st+1);
    }

}

int main(){
    cin>>n>>k;
    permu(0);
    return 0;
}
