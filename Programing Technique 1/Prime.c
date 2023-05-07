#include <stdio.h>
#include <math.h>
#define MAX 8000000
int a[MAX+1];
int main(){
    int i,j,n,cnt;
    scanf("%d",&n);
    if(n==1){
        printf("2\n"); return 0;
    }
    for(i=3;i<MAX;i+=2)
        a[i]=1;
    for(i=3;i<sqrt(MAX);i+=2){
        if(a[i]){
            for(j=i*i;j<MAX;j+=i)
                if(a[j])
                a[j]=0;
        }
    }
    for(i=3,cnt=1;cnt<=n;i+=2){
        if(a[i])
            cnt++;
        if(n==cnt){
            printf("%d\n",i); return 0;
        }
    }
    return 0;
}
