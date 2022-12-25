#include <bits/stdc++.h>
using namespace std;
int main() 
{
    // Write C++ code here
    int n;
    
    cin>>n;
    int ar[n];
    set<int> s;
    for (int i = 0; i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
        ar[i]=x;
    }
    cout<<s.size()<<endl;
    vector<int> v ;
    for (int i = n-1;i>=0;i--)
    {
        int f = 1;
        for (int j  = n-1;j>i;j--)
        {
           
           if (ar[i]==ar[j])
           {
               f = 0;
               break;
           }
        }
        if (f==1)
        {
            v.push_back(ar[i]);
        }
    }
    reverse(v.begin(),v.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
    
 
 
    return 0;
}