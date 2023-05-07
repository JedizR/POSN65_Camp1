#include <stdio.h>
int ch;

void score(int x){
    if(x<0||x>100) return;
    printf("The score entered is %d\n",x);
    ch=1;
}


int main(){
    int n,q=5;
    while(!ch){
        printf("Please enter score(0-100)\n");
        scanf("%d",&n);
        score(n);
    }
}
