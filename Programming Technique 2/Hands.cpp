#include <bits/stdc++.h>
//greedy
using namespace std;
int a[2100];
int main(){
    int n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n,greater<int>());
    int sum=0;
    for(i=0;i<n;i+=k){
        sum+=a[i];
    }
    printf("%d",sum);
}
