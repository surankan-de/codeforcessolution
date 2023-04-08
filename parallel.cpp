//wrongly understood the q

#include <bits/stdc++.h>
 
using namespace std;
typedef long long  ll;
const ll mod = 1000000007;
ll const  len = 200000;
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    //t=1;
    for(int re = 0;re<t;re++)
    {
        ll n,s1,s2;
        cin>>n>>s1>>s2;
        ll ar[n];
        for(int i =0;i<n;i++)
        {
            cin>>ar[i];
        }

        vector<pair<ll,ll>> v;
        for(ll i =0;i<n;i++)
        {
            v.push_back(make_pair(ar[i],i+1));
        }
        sort(v.rbegin(),v.rend());
           
        vector<ll> first,second;
        
        for(int i =0;i<v.size();i++){
            ll sum1=(first.size()+1)*s1;
            ll sum2=(second.size()+1)*s2;
            if(sum1<sum2)
            {
                first.push_back(v[i].second);
            }else{
                second.push_back(v[i].second);
            }
        }
        
        cout<<first.size()<<" ";
        for(ll x: first)
        {
            cout<<x<<" ";
        }

        cout<<"\n";

        cout<<second.size()<<" ";

        for(ll x: second)
        {
            cout<<x<<" ";
        }

        cout<<"\n";
    
    }

    
        
    
    return 0;
}
