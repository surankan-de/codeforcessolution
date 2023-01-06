#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    for(ll repeat = 0;repeat<t;repeat++)
    {
        
        ll ar[6];
        for(int i =0;i<6;i++)
        {
            cin>>ar[i];
        }
        set<ll> sx,sy;
        sx.insert(ar[0]);
        sx.insert(ar[2]);
        sx.insert(ar[4]);
        sy.insert(ar[1]);
        sy.insert(ar[3]);
        sy.insert(ar[5]);

        //cout<<ar[0]<<ar[1]<<endl;
        if(sx.size()==3||sy.size()==3)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    
    
    return 0;
    
}
