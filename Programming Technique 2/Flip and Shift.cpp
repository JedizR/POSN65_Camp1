//difference of sum of black/white in odd and even is 1
#include <bits/stdc++.h>

using namespace std;
int a[40];
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,even=0,odd=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i%2==0&&a[i]) even++;
            if(i%2==1&&a[i]) odd++;

        }
        if(n%2==1||abs(odd-even)<=1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
/*
2
18 0 0 1 0 1 1 1 1 0 1 0 0 1 0 0 0 0 1
14 1 1 0 0 1 1 1 0 0 1 1 0 1 0
*/

1 0 0
