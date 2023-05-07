#include <bits/stdc++.h>

using namespace std;

char a[10010];
stack <int> num,opr;
int main(){
    int i,n,op,nowopr,top,num1,num2;
    scanf(" %s",a);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(isalpha(a[i]))
            num.push(20);
        else if(a[i]=='[')
            opr.push(-1);
        else if(a[i]==']'){
            while(!opr.empty()&&opr.top()!=-1){
                top=opr.top();
                opr.pop();
                num1=num.top();
                num.pop();
                num2=num.top();
                num.pop();
                num.push(((num1+num2)*(top+100))/100);
            }
            opr.pop();
        }
        else{
            op=a[i]-'0';
            if(op==1)
                nowopr=4;
            else if(op==2)
                nowopr=8;
            else if(op==3)
                nowopr=16;
            while(!opr.empty()&&nowopr<=opr.top()){
                top=opr.top();
                opr.pop();
                num1=num.top();
                num.pop();
                num2=num.top();
                num.pop();
                num.push(((num1+num2)*(top+100))/100);
            }
            opr.push(nowopr);
        }
    }
    while(!opr.empty()){
        top=opr.top();
        opr.pop();
        num1=num.top();
        num.pop();
        num2=num.top();
        num.pop();
        num.push(((num1+num2)*(top+100))/100);
    }
    printf("%d\n",num.top());
    return 0;
}
