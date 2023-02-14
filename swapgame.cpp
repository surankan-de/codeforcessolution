//galat padh liya tha wo optimal fo each player hoga 
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin>>t;
    for(int re =0;re<t;re++)
    {
        int n;
        cin>>n;
        ll ar[n];
        for(int i =0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll k = ar[0];
        sort(ar,ar+n);
        if(k==ar[0])
        {
            cout<<"BOB\n";
        }else{
            cout<<"ALICE\n";
        }
        
    }

    return 0;
}
