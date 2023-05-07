#include <stdio.h>

int main(){
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            if(i==j||2*n-i-2==j){
                printf("*");
            }
            else{
                if(i>j&&2*n-i-2<j){
                    printf("D");
                }
                else if(i<j&&2*n-i-2>j)
                    printf("A");
                else if(i>j&&2*n-i-2>j)
                    printf("B");
                else{
                    printf("C");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
