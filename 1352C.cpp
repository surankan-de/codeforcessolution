//code to print kth number not divisible by k


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin>>t;
    for(int repeat = 0;repeat<t;repeat++)
    {
        ll n,k;
        cin>>n>>k;
        if(n>k)
        {
            cout<<k<<"\n";
        }else if(k==n)
        {
            cout<<k+1<<"\n";
        }else{
            if(k%(n-1)==0)
            {
                cout<<n*k/(n-1)-1<<"\n";
            }else{
                cout<<n*(k/(n-1))+k%(n-1)<<"\n";
            }
        }
    }

    return 0;
}
