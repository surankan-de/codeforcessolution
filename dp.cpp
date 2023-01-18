//my first dp problem

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    int k = min(a,min(b,c));
    vector<int> ar(4000,0);
    ar[a] =ar[b]=ar[c]= 1;
    for(int i =k+1;i<4001;i++)
    {
        for(int x:s)
        {
            if(i-x>=0)
            {
                if(ar[i-x]!=0)
                {
                    ar[i] = max(ar[i-x]+1,ar[i]);
                }
            }
        }
    }
    cout<<ar[n]<<"\n";
    
    return 0;
}
