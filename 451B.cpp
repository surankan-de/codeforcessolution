// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin>>n;
    ll ar[n],sar[n];
    for(int i =0;i<n;i++)
    { 
        
        cin>>ar[i];
        sar[i] = ar[i];
    }
    sort(sar,sar+n);
    
    vector<int> v;
    for(int i =0;i<n;i++)
    {
        if(ar[i]!=sar[i])
        {
            v.push_back(i);
        }
    }
    if(n>=3)
    {
        for(int i =1;i<n-1;i++)
        {
            if(sar[i-1]==ar[i+1]&&ar[i]==sar[i]&&sar[i+1]==ar[i-1])
            {
                v.push_back(i);
            }
        }
    }
    
    if(v.size()==1)
    {
        cout<<"no\n";
    }else if(v.size()==0)
    {
        cout<<"yes\n";
        cout<<1<<" "<<1<<"\n";
    }else{
        sort(v.begin(),v.end());
        
        int counter = 1;
        for(int i = 1;i<v.size()-1;i++)
        {
            if((v[i]-v[i-1])!=1)
            {
                counter = 0;
                break;
            }
        }
        if(counter == 0)
        {
            cout<<"no2\n";
        }else{
            reverse(ar+v[0],ar+v[v.size()-1]+1);
            int counter1 = 0;
            for(int i =0;i<n;i++)
            {
                if(sar[i]!=ar[i])
                {
                    counter1 = 1;
                    cout<<"no\n";
                    break;
                }
            }
            if(counter1==0)
            {
                cout<<"yes\n";
                cout<<v[0]+1<<" "<<v[v.size()-1]+1<<"\n";
            }
        }
        
    }
    
    
    
    return 0;
}
