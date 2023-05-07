#include <bits/stdc++.h>

using namespace std;

const int MxN=1e5+10;

int a[MxN];

map<int,int> mp;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(mp[a[i]]==1){
                cout << a[i] <<" ";
                cnt++;
            }
        }
        if(!cnt){
            cout <<"No Alone Num";
        }
        cout << endl;
        mp.clear();
    }
    return 0;
}
