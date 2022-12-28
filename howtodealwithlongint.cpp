//this has O(n)

#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        unsigned long long int con = 1000000007;
        unsigned long long int n;
        cin>>n;
        long long int k;
        unsigned long long int sum = 0;
        for(k = 1;k<n;k++)
        {
            sum+=(2022*(k*(k+k+1)%con))%con;
        }
        sum  = sum + (2022*((n*n)%con))%con;
        cout<<sum%con<<"\n";
    }

    return 0;
}

//solution given with O(1)
#include<bits/stdc++.h>
#define ll long long
const int n1=1e9+7;
using namespace std;
int solve()
{
    ll n;
    cin>>n;
    ll ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
    cout<<ans<<endl;
}
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
 
}
 
