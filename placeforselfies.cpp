//method 1
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
        ll n,m;
        cin>>n>>m;
        vector<ll> k;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            k.push_back(x);
        }
        ll a[m], b[m],c[m];
        for(int i =0;i<m;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }
 
        sort(k.begin(),k.end());
 
        for(int i =0;i<m;i++)
        {
            if(c[i]<=0)
            {
                cout<<"NO\n";
                continue;
            }
            ll sq = 4*a[i]*c[i];
            //sq = sqrtl(sq);
            int f = lower_bound(k.begin(),k.end(),b[i])-k.begin();
            
            
                if(f<n&&((k[f]-b[i])*(k[f]-b[i])-sq<0))
                {
                    cout<<"YES\n";
                    cout<<k[f]<<"\n";
                    continue;
                }
                if(f>0&&((k[f-1]-b[i])*(k[f-1]-b[i])-sq<0))
                {
                    cout<<"YES\n";
                    cout<<k[f-1]<<"\n";
                    continue;
                }
                cout<<"NO\n";
            
            
        }
 
    }
    return 0;
}


//this method here it checks lower bound for b then nearest 2 values if no then no ans otherwise yes ans;;;;


//method 2


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
        ll n,m;
        cin>>n>>m;
        vector<ll> k;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            k.push_back(x);
        }
        ll a[m], b[m],c[m];
        for(int i =0;i<m;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }
 
        sort(k.begin(),k.end());
 
        for(int i =0;i<m;i++)
        {
            if(c[i]<=0)
            {
                cout<<"NO\n";
                continue;
            }
            ll sq = 4*a[i]*c[i]-1;
            sq = sqrtl(sq);
            auto f = lower_bound(k.begin(),k.end(),b[i]-sq);
 
            if(f==k.end()||*f>b[i]+sq)
            {
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
                cout<<*f<<"\n";
            }
        }
 
    }
    return 0;
}

//here sqrtl is used and 4ac-1 is used since it will give a bit less number
