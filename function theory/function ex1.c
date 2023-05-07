#include <stdio.h>

void starline(int x){
    for(int i=0;i<x;i++){printf("*");}
}


int main(){
    int n,q=5;
    while(q--){
        scanf("%d",&n);
        starline(n),printf("\n");
    }
}
