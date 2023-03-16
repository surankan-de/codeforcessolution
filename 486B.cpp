//approach was wrong also i was lazy so looked up tut and my thinking was right
#include <bits/stdc++.h>

using namespace std;
typedef long long  ll;
const ll mod = 1000000007;
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
    //cin>>t;
    t=1;
    for(int re = 0;re<t;re++)
    {
        int m,n;
        cin>>m>>n;
        int ar[m][n],a[m][n],b[m][n];
        
        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                cin>>ar[i][j];
                a[i][j]=1;
                b[i][j] = 0;
                
            }
        }
        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(ar[i][j] ==0)
                {
                    for(int k =0;k<m;k++)
                    {
                        a[k][j]=0;
                    }
                    for(int k =0;k<n;k++)
                    {
                        a[i][k] = 0;
                    }
                }
            }
        }
        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(a[i][j] ==1)
                {
                    for(int k =0;k<m;k++)
                    {
                        b[k][j]=1;
                    }
                    for(int k =0;k<n;k++)
                    {
                        b[i][k] = 1;
                    }
                }
            }
        }
        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(b[i][j] !=ar[i][j])
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
        cout<<"YES\n";
        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        
        

        
    }
    return 0;
}
