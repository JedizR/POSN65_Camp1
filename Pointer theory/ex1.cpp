#include <bits/stdc++.h>

using namespace std;

int a[10000];

void swapp(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int i,j,*p,n,nn;
    p=a;
    cin >> n;
    nn=n;

    while(n--){
        int c=nn-n;
        cin >> *p;
        while(c--){
            if(*p>*(p-c)){
                    cout << (int)p << " : " << *p << " >> ";
                    swapp(p,(p-c));
                    cout << *p << "\n";
            }
        }
        //
        p++;
    }
    p=a;
    while(nn--){
        cout << *p << " ";
        p++;
    }
}
