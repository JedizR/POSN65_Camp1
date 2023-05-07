#include <stdio.h>
unsigned long long fac(int x){
    if(x==0) return 1;
    else return x*fac(x-1);
}
int main(){
    int n;
    scanf("%d",&n),printf("%lld",fac(n));
}
