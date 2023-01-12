//greedy algorithm used

#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    for(int repeat = 0;repeat<t;repeat++){
        int k, n ;
        cin>>k>>n;
        int diff[k-1];
        int m = n-1;
        if(n>k)
        {
            for(int i =0;i<k-1;i++)
            {
                if((i+2)*(i+3)/2-1<=m-(k-2-i))
                {
                    diff[i] = i+2;
                }else{
                    diff[i]=1;                
                    
                }
                
            }
        }else{
            for(int i =0;i<k-1;i++)
            {
                diff[i] = 1;
            }
        }
        
        int start = 1;
        cout<<start<<" ";
        for(int x:diff)
        {
            start+=x;
            cout<<start<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
