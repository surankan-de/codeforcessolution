//to count the coins only once the loop should start from the back of the normal loop of sum
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll lim = 1000000007;



int main()
{
    int n;
    cin>>n;
    ll ar[n];
    ll sum = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    vector<bool> v(sum+1,false);
    v[0] = true;
    set<ll> ans;
    for(int i =0;i<n;i++)
    {
        for(int j =sum;j>=0;j--)
        {
            if(j-ar[i]>=0)
            {
                if(v[j-ar[i]]==true)
                {
                    v[j] = true;
                    ans.insert(j);
                }
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(ll x: ans)
    {
        cout<<x<<" ";
    }
    cout<<"\n";



    return 0;
}
