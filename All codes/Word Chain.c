#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char s[100000],ps[100000];
int main()
{
    int l,n,i,ch=0,cnt=0,chh=0;
    scanf("%d %d",&l,&n);
    while(n--) {
        if(chh==0)cnt=0;
        scanf("%s",s);
        //printf("%c\n",s[0]);
        if(ch==0&&chh==0) strcpy(ps,s);
        if(chh==0){
            if(ch!=0){
                for(i=0;i<l;i++){
                    //printf("%c\n",s[i]);
                    //printf("*%c\n",ps[i]);
                    if(s[i]==ps[i]) cnt++;
                    //cnt++;
                }
                //printf("%d\n",cnt);
                if(cnt<2) chh=1;
                else strcpy(ps,s);
            }
            ch=1;
        }
    }
    printf("%s",ps);
    return 0;
}
/*
4
12
HEAD
HEAP
LEAP
TEAR
REAR
BAER
BAET
BEEP
JEEP
JOIP
JEIP
AEIO

6
20
qwerty
qwertk
dfgftk
dfgsdp
sdfgdp
kdkmdp
mbkldl
qkmldl
usildp
sgilsf
sgsgss
sgsgsd
sgdsdg
sgsdds
sgsgdg
sdgsdg
sgsdgg
sdgsdg
sdggdd
sdgdss
*/
