#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int,ll> a,pair<int,ll> b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    ll k;
    map<int,ll> m;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        m[k]+=k;
    }
    vector<pair<int,ll>> v;
    for(pair p:m)
    {
        v.push_back(p);
    }
    
    vector<ll> v1(100001,0);
    for(pair<int,ll> p : m)
    {
        v1[p.first] = p.second;
    }
    
    ll sum[100001];
    sum[0] = 0;
    sum[1] = v1[1];
    for(ll i=2;i<100001;i++)
    {
        sum[i] = max(sum[i-1],sum[i-2]+v1[i]);
    }
    sort(sum,sum+100001);
    cout<<sum[100000]<<"\n";
    
    
    return 0;
    
}
