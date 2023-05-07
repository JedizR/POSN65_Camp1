#include <bits/stdc++.h>

using namespace std;

const int MxN=1e5+10;

struct A{
    char s[110];
    bool operator < (const A &o) const{
        if(strcmp(s,o.s)<0)
            return true;
        return false;
    }
};

int a[MxN];
double b[MxN];
char c[MxN];
A d[MxN];

int main(){
    int opr;
    cin>>opr;
    int n;
    cin>>n;
    if(opr==1){
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,(a+1)+n);
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        sort(a+1,(a+1)+n,greater<int>());
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout <<"\n";
    }
    else if(opr==2){
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        sort(b+1,(b+1)+n);
        for(int i=1;i<=n;i++){
            printf("%.0lf ",b[i]);
        }
        cout<<"\n";
        sort(b+1,(b+1)+n,greater<double>());
        for(int i=1;i<=n;i++){
            printf("%.0lf ",b[i]);
        }
        cout << "\n";
    }
    else if(opr==3){
        for(int i=1;i<=n;i++){
            cin>>c[i];
        }
        sort(c+1,(c+1)+n);
        for(int i=1;i<=n;i++){
            cout << c[i]<< " ";
        }
        cout <<"\n";
        sort(c+1,(c+1)+n,greater<char>());
        for(int i=1;i<=n;i++){
            cout <<c[i]<<" ";
        }
        cout <<"\n";
    }
    else if(opr==4){
        for(int i=1;i<=n;i++){
            cin>>d[i].s;
        }
        sort(d+1,(d+1)+n);
        for(int i=1;i<=n;i++){
            cout << d[i].s<<" ";
        }
        cout << "\n";
        for(int i=n;i>=1;i--){
            cout <<d[i].s<<" ";
        }
        cout << "\n";
    }
    return 0;
}
