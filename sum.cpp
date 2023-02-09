//here sum method array is used other than sum which i used and len is done by index
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int repeat=0;repeat<t;repeat++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i =0;i<n;i++)
        {
            
            cin>>ar[i];
            
        }
        int sar[n];
        sar[0] = ar[0];
        for(int i=1;i<n;i++)
        {
            sar[i] = sar[i-1]+ar[i];
            
        }
        int k =2,ans =n,curr =0,len =0;
        for(int i=0;i<n;i++)
        {
          k =2;
          curr=i;
          len =0;
            for(int j =i+1;j<n;j++)
            {
                if(sar[n-1]%sar[i]!=0)
                {
                    
                    break;
                }else{
                    if(sar[j]==k*sar[i])
                    {
                        
                        k++;
                        len = max(max(i+1,j-curr),len);
                        curr = j;
                    }else if(sar[j]>k*sar[i])
                    {
                      len = n;
                      break;
                    }
                }
            }
            if(len==0)
            {
              len = n;
            }
            
            ans = min(len,ans);
            
        }
        cout<<ans<<"\n";
    
    }   
 
    return 0;
}

