#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int r,c,a=65;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<(char)a;
            if(a==90) a=97;
            else if(a==122) a=48;
            else if(a==57) a=65;
            else a++;
        }cout<<"\n";
    }return 0;
}
