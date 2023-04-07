//dp implementation
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
    //cin>>t;
    t=1;
    for(int re = 0;re<t;re++)
    {
        ll n,k,d;
        cin>>n>>k>>d;
        vector<ll> ar(n+1,0);
        for(int i =0;i<n+1;i++)
        {
            ar[i]=0;
        }

        ll poss[k];
        for(int i =0;i<k;i++)
        {
            poss[i] = i+1;
        }

        vector<ll> sub(n+1,0);
        
        
        for(int i =1;i<n+1;i++)
        {
            for(ll x:poss)
            {
                if(i-x>=0)
                {
                    if(i==x)
                    {
                        sub[i]++;
                        sub[i]%=mod;
                    }else{
                        sub[i]+=sub[i-x];
                        sub[i]%=mod;
                    }
                }
            }
        

        }
        for(int i =0;i<n+1;i++)
        {
            for(ll x: poss)
            {
                if(i-x>=0)
                {
                    if(x>=d)
                    {
                        if(i==x)
                        {
                            ar[i]++;
                            ar[i]%=mod;
                        }else{
                            ar[i]+=sub[i-x];
                            ar[i]%=mod;
                        }
                    }else{
                        ar[i]+=ar[i-x];
                        ar[i]%=mod;
                    }
                }
            }
        }

        cout<<ar[n]%mod<<"\n";




    }

    
        
    
    return 0;
}
