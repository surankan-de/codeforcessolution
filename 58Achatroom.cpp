//this code is way better(O(n)) than using nested 5 loops
//greedy alogorithm is used



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    if(n<5)
    {
        cout<<"NO\n";
        return 0;
    }
    vector<int> hv,ev,lv,ov;
    for(int x = 0;x<n;x++)
    {
        if(s[x]=='h')
        {
            hv.push_back(x);
        }else if(s[x]=='e')
        {
            ev.push_back(x);
        }else if(s[x]=='l')
        {
            lv.push_back(x);
        }else if(s[x]=='o')
        {
            ov.push_back(x);
        }
    }
    if(hv.size()==0||ev.size()==0||lv.size()<2||ov.size()==0)
    {
        cout<<"NO\n";
        return 0;
    }
    
    int hmin,emin,l1min,l2min,omin;
    hmin = hv[0];
    
    for(int x: ev)
    {
        if (x>hmin)
        {
            emin = x;
            break;
        }else{
            emin=-1;
        }
    }
    for(int x: lv)
    {
        if (x>emin&&emin!=-1)
        {
            l1min = x;
            break;
        }else{
            l1min=-1;
        }
    }
    for(int x: lv)
    {
        if (x>l1min&&l1min!=-1)
        {
            l2min = x;
            break;
        }else{
            l2min=-1;
        }
    }
    for(int x: ov)
    {
        if (x>l2min&&l2min!=-1)
        {
            omin = x;
            break;
        }else{
            omin=-1;
        }
    }
    if(hmin!=-1&&emin!=-1&&l1min!=-1&&l2min!=-1&&omin!=-1)
    {
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
    
    
    return 0;
    
}
