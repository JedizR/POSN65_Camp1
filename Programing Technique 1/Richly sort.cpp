#include <bits/stdc++.h>

using namespace std;

const int MxN=1e5+10;

struct A{
    int x,y;
    bool operator < (const A&o) const{
        if(x!=o.x)
            return x<o.x;
        return y>o.y;
    }
}a[MxN];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin >> a[i].x>>a[i].y;
    sort(a+1,(a+1)+n);
    for(int i=1;i<=n;i++)
        cout << a[i].x << " " << a[i].y<<endl;
    return 0;
}
