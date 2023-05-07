#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char a[10000];

int main(){
    int i,j,k;
    scanf("%s",a);
    int len=strlen(a);
    for(i=0;i<5;i++){
        for(k=0;k<len;k++){
            for(j=0;j<4;j++){
                if(3-i-1==j||i+2==j||i-2==j||3-i+3==j){
                    if((k-2)%3==0){
                        printf("*");
                    }
                    else{
                        if(j==0&&(k-3)%3==0&&k!=0){
                            printf("*");
                        }
                        else{
                            printf("#");
                        }
                    }
                }
                else if(i==2&&j==2){
                    printf("%c",a[k]);
                }
                else{
                    printf(".");
                }
            }

        }
        if(i==2&&k==len){
            if((len)%3==0){
                printf("*");
            }
            else
                printf("#");
        }
        else
            printf(".");
        printf("\n");

    }
}
