//program to incinerate.. should have used two loops and would have worked......and wrong impelemetaion i was using

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ds(pair<ll,ll> a,pair<ll,ll>b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }else{
        return a.first<b.first;
    }
}
int main() {
    int t;
    cin>>t;
    for(int loop =0;loop<t;loop++)
    {
        ll n,k;
        cin>>n>>k;
        ll health[n],power[n];
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++)
        {
            cin>>health[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>power[i];
        }
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(power[i],health[i]));
        }
        
        sort(v.begin(),v.end(),ds);
        
        ll nhealth[n],npower[n];
        for(int i=0;i<n;i++)
        {
            npower[i] = v[i].first;
            nhealth[i] = v[i].second;
        }
        
        
        ll damage =0;
        ll index=0;
        while(k>0&&index<n)
        {
            damage+=k;
            while(index<n&&nhealth[index]<=damage)
            {
                index++;
            }
            
            k-=npower[index];
        }
        cout<<(index==n ? "YES\n":"NO\n");
        
    }
    return 0;
}
