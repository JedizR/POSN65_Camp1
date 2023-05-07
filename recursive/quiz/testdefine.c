#include <stdio.h>
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swapc(char a,char b){
    char temp=a;
    a=b;
    b=temp;
}

int main(){
    int a,n;
    char i,j;
    scanf("%d %d",&n,&a);
    swap(&n,&a);
    printf("%d %d",n,a);
    scanf("%c %c",&i,&j);
    swapc(i,j);
    printf("%c %c",i,j);
}
