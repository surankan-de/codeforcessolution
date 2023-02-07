// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    for(int repeat  =0;repeat<t;repeat++)
    {
        int n;
        cin>>n;
        ll ar[n];
        for(int i =0;i<n;i++)
        {
             cin>>ar[i];
             ar[i]-=i+1;
        }
        ll sum =0;
        map<ll,ll> m;
        for(ll x: ar)
        {
            m[x]++;
        }
        for(pair<ll,ll> p : m)
        {
            if(p.second>=2)
            {
                sum+=p.second*(p.second-1)/2;
            }
        }
        
        cout<<sum<<"\n";
    }

    return 0;
}
