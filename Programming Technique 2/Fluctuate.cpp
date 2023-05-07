#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,mn=1e9,mx=0,a;
    cin>>n;
    while(n--){
        cin>> a;
        mx=max(mx,a-mn);
        mn=min(mn,a);
    }
    cout<<mx;
}
