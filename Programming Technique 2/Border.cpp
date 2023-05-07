#include <bits/stdc++.h>

using namespace std;
int a[300][300],b[11000];
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<2*n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i%2==0&&j==n) continue;
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<2*n;i+=2){
        for(int j=0;j<n;j++){
            b[cnt++]=3*(a[i][j]-a[i+2][j])+5*(a[i+1][j]-a[i+1][j+1]);

        }
    }
    int sum=0;
    sort(b,b+cnt);
    for(int i=0;i<k;i++){

        sum+=b[i];
    }
    printf("%d\n",sum);
    return 0;
}
/*
4 5
11 42 30 56
49 85 23 37 15
70 9 81 60
39 2 42 98 6
57 10 55 77
14 32 28 29 30
27 64 83 1
71 85 53 99 48
5 97 68 45
*/
