// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    // Write C++ code here
    ll n;
    cin>>n;
    ll k;
    map<ll,ll> ma;
    for(ll i=0;i<n;i++)
    {
        cin>>k;
        ma[k]++;
    }
    ll ans[1000001];
    for(int i =0;i<1000001;i++)
    {
        ans[i] = 0;
    }
    for(pair<ll,ll> p:ma)
    {
        ans[p.first] = p.second;
    }
    for(ll i =1;i<100001;i++)
    {
        ans[i]+=ans[i-1];
    }
    
    
    ll q;
    cin>>q;
    ll m;
    for(ll i =0;i<q;i++)
    {
        cin>>m;
        if(m>=100001)
        {
            cout<<ans[100000]<<"\n";
        }else{
            cout<<ans[m]<<"\n";
        }
    }
 
    return 0;
}
