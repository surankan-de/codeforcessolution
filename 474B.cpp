// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int bins(int ar[],int n,int key)
{
    int start = 0;
    int end = n-1;
    int ans,mid;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(ar[mid]>=key&&ar[mid-1]<key)
        {
            ans = mid;
            break;
        }else if(ar[mid]>key&&ar[mid-1]>=key)
        {
            end = mid-1;
        }else{
            start =  mid+1;
        }
        
    }
    return ans;
}


int main() {
    int n;
    cin>>n;
    int l,k;
    int ar[n];
    cin>>ar[0];
    for(int i =1;i<n;i++)
    {
        cin>>l;
        ar[i] = ar[i-1]+l;
    }
    
    int m;
    cin>>m;
    int ans;
    for(int i =0;i<m;i++)
    {
        cin>>k;
        ans = bins(ar,n,k);
        cout<<ans+1<<"\n";
    }
    
    
    
    return 0;
}
