#include <bits/stdc++.h>
using namespace std;

char arr[10100][10100];

int fibo(int a){
    if(a==0)return 0;
    if(a==1)return 1;
    return fibo(a-1)+fibo(a-2);

}


int main(){
    int i,j,n,a,b,p,t1=500,t2=500,mni=1e9,mnj=1e9,mxi=0,mxj=0;
    char alpha='A';
    cin>>p;
    for(n=1;n<=p;n++){
        if(n%2==0){
            a=fibo(n);
            b=fibo(n+1);
        }
        else{
            a=fibo(n+1);
            b=fibo(n);
        }
        //cout<<a<<" "<<b;
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                if(arr[t1+i][t2+j]=='\0')
                    arr[t1+i][t2+j]=alpha;
            }
        }
        //b
        //if(n==1)t2+=1;
        //c
        //if(n==2)t1+=1,t2-=1;
        //d
        //if(n==3)t2-=fibo(n+1);
        //if(n==4)t1-=fibo(n+1);

        if(n%4==3)t2-=fibo(n+1);
        if(n%4==0)t1-=fibo(n+1);
        mni=min(t1,mnj);
        mnj=min(t2,mnj);
        mxi=max(t1,mxj);
        mxj=max(t2,mxj);
        //f
        //if(n==5)t2+=12; //fibo(6+1)-1
        alpha++;
    }
    for(i=490;i<600;i++){
        for(j=450;j<510;j++){
            //if(arr[i][j])
            cout<<arr[i][j];
        }
        cout<<"\n";
    }

}
