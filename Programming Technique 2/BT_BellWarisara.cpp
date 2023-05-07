#include <bits/stdc++.h>

using namespace std;

char a[1010][1010];
int mark[1010][1010];

int main(){
    int q,i,j,k,l,cnt,n,m;
    cin>> q;
    while(q--){
        memset(a,' ',sizeof(a));
        memset(mark,0,sizeof(mark));
        cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cnt=0;
                for(k=0;k<n;k++){
                    if(tolower(a[i][j])==tolower(a[k][j])) cnt++;
                    if(cnt>1) break;
                }
                for(l=0;l<m;l++){
                    if(tolower(a[i][j])==tolower(a[i][l])) cnt++;
                    if(cnt>2) break;
                }
                if(cnt==2) mark[i][j]=1;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(mark[i][j]) cout<<a[i][j];
            }
        }
        cout<<"\n";
    }
}
/*
4
4 3
pxe
OsN
Tte
exE
6 4
BuRg
EXit
TxrG
eKuY
OobO
yUry
3 3
cBL
oBb
Cve
5 6
BelUwU
ElWaBu
swsUWr
eKisaK
SraBbu
*/
