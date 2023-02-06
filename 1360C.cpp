//use brain brain brain
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int repeat = 0;repeat<t;repeat++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i =0;i<n;i++)
        {
            cin>>ar[i];
        }
        vector<int> odd,even;
        for(int i =0;i<n;i++)
        {
            if(ar[i]%2==0)
            {
                even.push_back(ar[i]);
            }else{
                odd.push_back(ar[i]);
            }
        }
        int o = odd.size();
        int e = even.size();
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        
        int counter =0;
        if(o%2==0&&e%2==0)
        {
            counter =1;
        }else{
            for(int x:odd)
            {
                for(int y: even)
                {
                    if(abs(x-y)==1)
                    {
                        counter =1;
                        break;
                    }
                }
            }
        }
        if(counter==1)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
