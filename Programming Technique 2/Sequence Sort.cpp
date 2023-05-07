#include <bits/stdc++.h>

using namespace std;
vector <int> v[100010];

bool cnp(vector<int> a,vector<int> b){
    return b<a;
}
int main(){
    int n,m,num;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&num);
            v[i].push_back(num);
        }
    }
    sort(v,v+n,cnp);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    return 0;
}
