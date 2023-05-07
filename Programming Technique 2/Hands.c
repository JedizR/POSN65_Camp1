#include <bits/stdc++.h>

using namespace std;
int a[100];
int main(){
    int n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n,greater<int>())
}
