#include <bits/stdc++.h>

using namespace std;

void swapi(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b,*p,*pp;
    cin >> a;
    p=&a;
    pp=p;
    //*pp=&p;
    cout << *pp;

}
