// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int ar[5] = {5,10,20,30,30};
    multiset<int> m;
    for(int x: ar)
    {
        m.insert(x);
    }
    
    while(m.size()!=1)
    {
        auto i = m.begin();
        int k  = *i;
        m.erase(i);
        
        auto j = m.begin();
        k  += *j;
        m.erase(j);
        
        m.insert(k);
        
    }
    for(int x: m)
    {
        cout<<x;
    }
    
    

    return 0;
}
