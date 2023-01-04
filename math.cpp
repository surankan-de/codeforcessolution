#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
  //please check that we used general math equation like a+b = k+1(a)+k(b)....
  for(int nop=0;nop<t;nop++)
    {
        int n;
        cin>>n;
        if(n%2==1)
        {
            int k =(n-1)/2;
            if(n>=5)
            {
                cout<<"YES\n";
                for(int i =0;i<n;i++)
                {
                    if(i%2==0)
                    {
                        cout<<k-1<<" ";
                    }else{
                        cout<<-k<<" ";
                    }
                }
                cout<<"\n";
            }else{
                cout<<"NO\n";
            }
        }else
        {
            cout<<"YES\n";
            for(int i =0;i<n;i++)
            {
                if(i%2==0)
                {
                    cout<<1<<" ";
                }else{
                    cout<<-1<<" ";
                }
            }
            cout<<"\n";
        }
    }
    
    
    return 0;
}
