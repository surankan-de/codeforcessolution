//here we need to check max or min from left and right simultaneously if in both way no max or min is left then we need to return the start and end index... new way
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int re = 0;re<t;re++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i =0;i<n;i++)
        {
            cin>>ar[i];
        }
        int l =0, r = n-1;
        int mi = 1, ma = n;
        while(l<=r)
        {
            if(ar[l]==mi)
            {
                mi++;
                l++;
            }else if(ar[l]==ma)
            {
                ma--;
                l++;
            }else if(ar[r]==mi)
            {
                mi++;
                r--;
            }else if(ar[r]==ma)
            {
                ma--;
                r--;
            }else{
                break;
            }
        }
        if(l<r)
        {
            cout<<l+1<<" "<<r+1<<"\n";
        }else{
            cout<<-1<<"\n";
        }
        
    }

    return 0;
}
