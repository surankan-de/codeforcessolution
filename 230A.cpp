// usage of multi set here

#include <bits/stdc++.h>
using namespace std;
 
bool sao( pair<int,int> a, pair<int,int> b)
{
    return (a.first<b.first);
}
int main() {
    // Write C++ code here
    int s,n;
    cin>>s>>n;
    int ar1[n],ar2[n];
    multiset<pair<int,int>> se;
    for(int i =0;i<n;i++)
    {
        cin>>ar1[i]>>ar2[i];
        se.insert(make_pair(ar1[i],ar2[i]));
    }
    
    int sum = s;
    int counter =1;
    for(pair<int,int> p: se)
    {
        if(s<=p.first)
        {
            counter =0;
        }else{
            s+=p.second;
        }
    }
    if(counter==1)
    {
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
 
    return 0;
}
