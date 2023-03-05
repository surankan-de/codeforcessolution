//use binsearch to make time complexity less

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lmax(ll a,ll b)
{
    return(a>b? a:b);
}
int main() {
    int t;
    cin>>t;
    for(int re = 0;re<t;re++)
    {
        int n;cin>>n;
        ll ar[n];
        for(int i =0;i<n;i++)
        {
            cin>>ar[i];
        }
        vector<ll> v1,v2;
        for(int i =0;i<n;i++)
        {
            if(ar[i]<i+1)
            {
                v1.push_back(ar[i]);
                v2.push_back(i+1);
            }
        }
        
        ll sum = 0;
        for(int i =0;i<v1.size();i++)
        {
            int k;
            if(v1[i]<v2[0])
            {
                k = 0;
            }else{
                k = upper_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
            }
            if(v1[i]==v2[k-1])
            {
                k--;
            }
            sum+=k;
        }
        cout<<sum<<"\n";
    }

    return 0;
}
