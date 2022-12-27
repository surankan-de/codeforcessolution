
//here i needed to implement map so this is a good question
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i =0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    map<int,int>m;
	    
	    for(int i = 0;i<n;i++)
	    {
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    
	    int freq = INT_MIN;
	    
	    for(auto i : m)
	    {
	       
	        if (freq<i.second)
	        {
	            freq = i.second;
	        }
	        
	    }
	    
	    
	    
	   
	   
	    cout<<n -freq<<"\n";
	        
	}
	return 0;
}

