#include <bits/stdc++.h>

using namespace std;

vector <int> v;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,i;
    //v.clear();
    cin>>n;
    if(n==0){
        cout<<10<<endl;
        return 0;
        //continue;
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
        //continue;
    }
    for(i=9;i>1;i--){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>10){
        cout<<-1<<endl;
        //continue;
        return 0;
    }
    for(i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    //cout<<endl;
    //}
    return 0;
 }
 #include <bits/stdc++.h>


