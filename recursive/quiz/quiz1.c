#include <stdio.h>

int main(){
    int n,h1,m1,h2,m2,hr=0,mr=0;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(h1<h2){
        if(m2==m1){
            hr=h2-h1;
            mr=0;
        }
        else if(m2>m1){
            hr=h2-h1;
            mr=m2-m1;
        }
        else{
            hr=h2-h1-1;
            mr=60-(m1-m2);
        }
    }
    else if(h1>h2){
        if(m2==m1){
            hr=h2+(24-h1);
            mr=0;
        }
        else if(m2>m1){
            hr=h2+(24-h1);
            mr=m2-m1;
        }
        else{
            hr=h2+(24-h1)-1;
            mr=60-(m1-m2);
        }
    }
    else{
        if(m2==m1){
            hr=0;
            mr=0;
        }
        else if(m2>m1){
            hr=0;
            mr=m2-m1;
        }
        else{
            hr=23;
            mr=m1-m2;
        }
    }
    printf("%d %d",hr,mr);
    return 0;
}
