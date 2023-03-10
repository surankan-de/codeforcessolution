#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const  len = 200000;
ll lmax(ll a,ll b)
{
    return (a>b?a:b);
}
ll lmin(ll a,ll b)
{
    return (a<b?a:b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    //t=1;
    for(int re = 0;re<t;re++)
    {
        ll n;
        cin>>n;
        vector<ll> v(n+1,0);
        for(int i =0;i<n;i++)
        {
            int x;
            cin>>x;
            v[x]++;

        }
        sort(v.rbegin(),v.rend());
        
        vector<int> ans(n+1,0);
        int k = n;
        ll sum = 0;
        for(int i =0;i<v.size();i++)
        {
            if(ans[v[i]]==0)
            {
                ans[v[i]]=1;
                k = v[i];
                sum+=v[i];
            }else{
                if(k>0)
                {
                    k--;
                    ans[k]=1;
                    sum+=k;
                }
            }
        }
        
        
        cout<<sum<<"\n";

    }
    return 0;
}
