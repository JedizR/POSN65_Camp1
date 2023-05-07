#include <bits/stdc++.h>

using namespace std;

stack <char> st;

int main(){
    int n;
    char c;
    scanf("%d",&n);
    while(n--){
        scanf(" %c",&c);
        if(!st.empty()&&st.top()==c){
            st.pop();
        }
        else
            st.push(c);
    }
    printf("%d\n",st.size());
    //cout << st.size()<<endl;
    if(st.empty()){
        printf("empty\n");
        //cout <<"empty\n";
    }
    else{
        while(!st.empty()){
            printf("%c",st.top());
            //cout<<st.top();
            st.pop();
        }
    }
    return 0;
}
