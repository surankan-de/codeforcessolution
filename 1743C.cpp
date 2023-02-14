//need to learn
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;
string s;
cin>>s;
int a[n],ans=0;
for(int i=0;i<n;i++) cin>>a[i];
int min_val=INT_MAX;
 for(int i=n-1;i>=0;1)
 {
	 if(s[i]=='1')
	 { 
	     min_val=a[i];
		 while(i>=0)
		 {
			 if(s[i]=='1'){
				 ans+=a[i];
				 min_val=min(min_val,a[i]); 
				 i--;
			 }
			 else {
				  ans+=a[i];
				 min_val=min(min_val,a[i]); 
				 i--;
				 ans=ans-min_val;
				 break;
			 }
		 }
	 }
    else i--;
 }
cout<<ans<<endl;
}
 return 0;
}
