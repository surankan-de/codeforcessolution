// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<int> fact{1,1,2,6,24,120,720,5040,40320};
    vector<int> v;
    for(int i =0;i<s.size();i++)
    {
        v.push_back(int(s[i]));
    }
    sort(v.begin(),v.end());
    string t;
    for(int i =-0;i<s.size();i++)
    {
        t+=char(v[i]);
    }
    s = t;
    int ans ;
    map<int,int> m;
    for(int i =0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    ans = fact[s.size()];
    for(pair<int,int> p: m)
    {
        ans/=fact[p.second];
    }
    cout<<ans<<"\n";
    cout<<s;
    cout<<"\n";
    
   
    while(next_permutation(s.begin(),s.end()))
    {
        cout<<s;
        cout<<"\n";
    }

    return 0;
}
