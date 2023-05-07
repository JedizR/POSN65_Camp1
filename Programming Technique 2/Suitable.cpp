#include <bits/stdc++.h>
//greedy
using namespace std;
long long a[1010],b[1010];
int main(){
    long long n,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
    }
    sort(a,a+n,greater<long long>());
    sort(b,b+n,greater<long long>());
    long long sum=0;
    for(i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    printf("%lld",sum);
    return 0;
}
