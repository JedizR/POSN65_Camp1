#include <stdio.h>
#include <string.h>

char const sms[15][15]={"*","CAB","FDE","IGH","LJK","OMN","SPQR","VTU","ZWXY"};
char ans[11000];
int last = 0;
void press(int B,int T)
{
    int t=T;
    if(B==0)
    {
        while(t>0)
        {
            ans[last]=0;
            last--;
            if(last<0) last=0;
            t--;
        }
    }
    else
    {
        int l=strlen(sms[B]);
        int k=ans[last]=sms[B][t%l];
        last++;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int now,t;
    scanf("%d %d",&now,&t);
    now--;
    press(now,t);

    int i;
    for(i=0;i<n-1;i++){
        int x,y;
        scanf("%d %d %d",&x,&y,&t);
        now+=(x+3*y);
        press(now,t);
    }
    if(last==0) printf("null");
    else printf("%s",ans);
    return 0;
}
