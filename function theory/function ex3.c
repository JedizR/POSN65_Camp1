#include <stdio.h>
void check(int x){(!(x%2))?printf("%d is even\n",x):printf("%d is odd\n",x);}
int main(){
    int n;
    while(1){scanf("%d",&n),check(n);}
}
