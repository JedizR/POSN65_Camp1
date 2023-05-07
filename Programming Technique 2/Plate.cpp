#include <bits/stdc++.h>
#define MxN 10001
using namespace std;

int arr[MxN];
queue <int> qu,clss[110];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int nc,ns;
    cin>>nc>>ns;
    while(ns--){
        int a,b;
        cin>>a>>b;
        arr[b]=a;
    }
    while(1){
        char opr;
        cin>>opr;
        if(opr=='X'){
            cout<<0;
            break;
        }
        if(opr=='D'){
            if(qu.empty()){
                cout<<"empty\n";
                continue;
            }
            int cls=qu.front();
            int id=clss[cls].front();
            cout<<id<<'\n';
            clss[cls].pop();
            if(clss[cls].empty()) qu.pop();
        }
        if(opr=='E'){
            int id;
            cin>>id;
            int cls=arr[id];
            if(clss[cls].empty()) qu.push(cls);
            clss[cls].push(id);
        }
    }
    return 0;
}
