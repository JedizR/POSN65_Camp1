#include <bits/stdc++.h>

using namespace std;

stack <int> st;
char a[110];

int main(){
    int q,i,sum=0,ans=0;
    cin>>q;
    while(q--){
        ans=0;
        sum=0;
        cin>>a;
        for(i=0;i<strlen(a);i++){
            if(a[i]=='('){
                st.push(0);
            }
            if(a[i]==')'){
                while(st.top()!=0){
                    sum+=st.top();
                    st.pop();
                }
                st.pop();
                st.push(sum);
                sum=0;
            }
            if(isdigit(a[i])){
                sum=st.top()*(a[i]-'0');
                st.pop();
                st.push(sum);
                sum=0;
            }
            if(isalpha(a[i])){
                if(a[i]=='C'){
                    st.push(12);
                }
                if(a[i]=='O'){
                    st.push(16);
                }
                if(a[i]=='H'){
                    st.push(1);
                }
            }

        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        cout<<ans<<"\n";
    }
}
/*
2
COOH
(C(H2O)2)3
*/
