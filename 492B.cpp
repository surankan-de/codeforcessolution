//set precision to 9 digit

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
    int n,l;
    cin>>n>>l;
    double ar[n];
    for(int i = 0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    double diff[n+1];
    diff[0] = ar[0]-0;
    diff[n] = l-ar[n-1];
    for(int i =1;i<n;i++)
    {
        diff[i] = (ar[i]-ar[i-1])/2;
    }
    sort(diff,diff+n+1);
    
    
    if(diff[n] ==l-ar[n-1])
    {
        double k = diff[n];
        cout<<setprecision(9)<<k<<"\n";
    }else if(diff[n] == ar[0]-0)
    {
        double k = diff[n];
        cout<<setprecision(9)<<k<<"\n";
    }else{
        double k = diff[n];
        cout<<setprecision(9)<<k<<"\n";
    }

    return 0;
}
