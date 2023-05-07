#include <stdio.h>
#include <string.h>
#include <ctype.h>

int di[8]= {-1,-1,0,1,1,1,0,-1}, dj[8]={0,1,1,1,0,-1,-1,-1};
char A[333][333],S[333];
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int i,j,k,dr,t,K;
    for(i=0;i<N;i++) scanf(" %s",A[i]);
    scanf("%d",&K);
    for(k=0;k<K;k++){
        int fnd=0;
        scanf(" %s",S);
        int l =strlen(S);
        for(i=0;i<N&&!fnd;i++){
                for(j=0;j<M&&!fnd;j++){
                    if(tolower(S[0])==tolower(A[i][j])){
                        for(dr=0;dr<8&&!fnd;dr++){
                            int x=i,y=j;
                            for(t=0;t<l;t++){
                                if(tolower(A[x][y])!=tolower(S[t])) break;
                                if(t==l-1)
                                {
                                    printf("%d %d\n",i,j); fnd=1;
                                }
                                x+=di[dr],y+=dj[dr];
                                if(x<0||x>=N||y<0||y>=M) break;
                            }
                        }
                    }
                }
        }
    }
    return 0;
}
