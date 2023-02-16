// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4};
    
    for(int b =0;b<1<<4;b++)
    {
        vector<int> s;
        for(int i =0;i<4;i++)
        {
            if(b&(1<<i))
            {
                s.push_back(v[i]);
            }
            
        }
        for(int k: s)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
