//check the cases where we can go left and check if it is winning ..if we can go left and if it is lesser than prev winning so it will be wiinning too

#include <bits/stdc++.h>

 
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
ll const  len = 200000;
 

/*ll powerf(ll a,ll b){
        if(b==0)
        {
            return 1;
        }
        ll ans = powerf( a ,b/2);
        if(b%2!=0)
        {
            return ans*ans*a;
        }else{
            return ans*a;
        }
    }*/





int main()
{
   /*vector<ll> sieve(1000001,0);
    for(int i =2;i<=sqrt(1000001);i++)
    {
        if(sieve[i]==0)
        {
            for(int j =i*i;j<1000001;j+=i)
            {
                sieve[j] =i;
            }
        }
        
    }*/
    ll t;
    cin>>t;
    //t=1;
    for(ll re =0;re<t;re++)
    {
        ll n;;
        cin>>n;
        ll ar[n];
        for(int i =0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll ans =0;
        ll mn = n+1,wmin = n+1;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>mn&&ar[i]<wmin)
            {
                ans++;
                wmin=ar[i];

            }
            mn = min(ar[i],mn);
        }


        cout<<ans<<"\n";
    }
    
}
