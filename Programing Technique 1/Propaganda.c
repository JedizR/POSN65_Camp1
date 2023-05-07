#include <stdio.h>
#include <math.h>

int main(){
    int n,i,r;
    scanf("%d",&n);
    r=(int)sqrt(n);
    for(i=2;i<=r;i++){
        if(!(n%i)){
            printf("No\n");
            return 0;
        }
    }
    printf((n>1)?"Yes\n":"No\n");
    return 0;
}
