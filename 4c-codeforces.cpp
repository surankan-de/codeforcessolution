// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    map<string , int>m;
    for(int i = 0;i<n;i++)
    {
        string s;
        cin>>s;
        if(m[s]==0)
        {
            cout<<"OK\n";
            m[s]++;
        }else{
            cout<<s<<m[s]<<"\n";
            m[s]++;
        }
    }

    return 0;
}
