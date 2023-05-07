#include <stdio.h>

int main(){
    int l,r,h,a[300]={0},i,j,n,state;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&l,&h,&r);
        for(j=l;j<r;j++){
            if(a[j]<h)
                a[j]=h;
        }
    }
    state=0;
    for(i=1;i<270;i++){
        if(a[i]!=state){
            printf("%d %d ",i,a[i]);
            state=a[i];
        }
    }
    return 0;
}

