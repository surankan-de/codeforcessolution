//i thought at first to try rotating the matrix(in 2d way) but not used for function so 
//1. i should have made that 1d and tried
//2 . do like shown below
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
    // Write C++ code here
    int t;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        int ar[4];
        cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];
        int maxim = INT_MIN;
        int minim = INT_MAX;
        int sum =0;
        for (int x: ar)
        {
            maxim = max(maxim,x);
            minim = min(minim,x);
        }
        for(int i =0;i<4;i++)
        {
            if(ar[i]==maxim||ar[i]==minim)
            {
                sum+=i;
            }
        }
        if(sum ==3)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
    
    

    return 0;
}

