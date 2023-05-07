#include <bits/stdc++.h>

using namespace std;
stack<int> p;
int main(){
    int q,a,opr;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&opr);
        if(opr==1){
            scanf("%d",&a);
            p.push(a);
        }
        if(opr==2){
            if(p.empty())
                printf("-1\n");
            else{
                printf("%d\n",p.top());
                p.pop();
            }
        }
    }
    return 0;
}
