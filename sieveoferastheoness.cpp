//sieve of erastheoness problem helps in finding prime fast at less time

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ll n;
    cin>>n;
    ll ar[1000001];
    for(ll i =0;i<1000001;i++)
    {
        ar[i] = 0;
    }
    ar[0]=-1;
    ar[1] = -1;
    for(ll i =2;i<=1000;i++)
    {
        if(ar[i]==0)
        {
            for(ll k = 2*i;k<=1000000;k+=i)
            {
                ar[k] = i;
            }
        }
    }
    
    for(ll i =0;i<n;i++)
    {
        ll k;
        cin>>k;
        double x;
        ll y;
        x = sqrt(k);
        y = sqrt(k);
        if(x==y&&k>1)
        {
            if(ar[y]==0)
            {
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
    

    return 0;
}
