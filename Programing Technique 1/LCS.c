#include <stdio.h>

a[100000];

long long gcd(long long a,long long b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main(){
    long long n,ans,num;
    scanf("%lld %lld",&n,&ans);
    while(n-->1){
        scanf("%lld",&num);
        ans=ans*num/gcd(num,ans);
    }
    printf("%lld\n",ans);
}
