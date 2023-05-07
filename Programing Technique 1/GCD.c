#include <stdio.h>

a[100000];

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int n,i,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ans=gcd(a[0],a[1]);
    for(i=2;i<n;i++){
        ans=gcd(a[i],ans);
    }
    printf("%d",ans);
}
