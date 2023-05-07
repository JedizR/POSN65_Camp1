#include <bits/stdc++.h>

using namespace std;

int a[100000];

int main(){
    int i,j,l=0,r=1e9,mid,n,m,sum;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    while(l<r){
        mid=(l+r)/2;
        for(i=0,sum=0;i<n;i++){
            sum+=mid/a[i];
        }
        if(sum>=m) r=mid;
        else l=mid+1;
    }
    cout << l;
}
