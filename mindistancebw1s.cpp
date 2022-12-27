//i used 2 for loops  before but it was giving TLE so i need to work on logic more


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    int even = 0;
	    int odd = 0;
	    for(int i =0;i<n;i++)
	    {
	        if(a[i]=='1')
	        {
	            if(i%2==0)
	            {
	                even++;
	            }else{
	                odd++;
	            }
	        }
	    }
	    if (even>0&&odd>0)
	    {
	        cout<<1<<"\n";
	    }else{
	        cout<<2<<"\n";
	    }
	}
	return 0;
}
