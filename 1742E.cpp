//concept1... here we neeeded to check the max only shiri so to make it binary searchable use max function....
// upper boound and lower bound function of vector

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lmax(ll a,ll b)
{
    return(a>b ? a:b);
}
int main()
{
    int t;
    cin>>t;
    for(int re = 0;re<t;re++)
    {
        ll n,q;
        cin>>n>>q;
        ll ar[n],qu[q];
        for(int i =0;i<n;i++ )
        {
            cin>>ar[i];
        }
        for(int i =0;i<q;i++)
        {
            cin>>qu[i];
        }
        ll sum[n+1];
        sum[0] = 0;
        for(int i =1;i<=n;i++)
        {
            sum[i] = sum[i-1]+ar[i-1];
        }

        vector<ll> maxi(n,0);
        maxi[0] = ar[0];
        for(int i =1;i<n;i++)
        {
            maxi[i]=lmax(maxi[i-1],ar[i]);
        }
        for(int i =0;i<q;i++)
        {
            int upper = upper_bound(maxi.begin(),maxi.end(),qu[i])-maxi.begin();
            cout<<sum[upper]<<" ";
            
        }
        cout<<"\n";
    }


    

}
