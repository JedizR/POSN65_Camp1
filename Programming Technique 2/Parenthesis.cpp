#include <bits/stdc++.h>

using namespace std;

stack <char> st;

char c[100];

int main(){
    int n;
    cin>>n;
    while(n--){
        while(!st.empty()) st.pop();
        cin>>c;
        for(int i=0;i<strlen(c);i++){
            if(!st.empty()&&((st.top()==c[i]-1||st.top()==c[i]-2))){
                st.pop();
            }
            else
                st.push(c[i]);
        }
        if(st.empty()) cout <<"Yes\n";
        else cout <<"No\n";
    }
}
/*
3
([])
(([()])))
([()[]()])()
*/
