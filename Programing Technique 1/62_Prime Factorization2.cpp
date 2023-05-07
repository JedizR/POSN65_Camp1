#include<bits/stdc++.h>

using namespace std;

int main()
{
    //cin.tie(0)->sync_with_stdio(0);
    int q,n,i,j;
    cin>> q;
    while(q--)
    {
        cin>> n;
        for(i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                cout<< i << " " ;
                n=n/i;
                if(n!=1)
                {
                    cout<< "x ";
                }
            }
        }
        if(n!=1)
            cout<< n;
    }
    return 0;
}
