
//this one i  thought almost same but i forgot to take the case that k can be equal to one or many of r,g or b

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i =0;i<t;i++)
	{
	    long long int r,g,b,k;
	    long long int m =0;
	    cin>>r>>g>>b>>k;
	    
	    if (k>r)
	    {
	        m+=r;
	    }else
	    {
	        m+=k-1;
	    }
	    if (k>g)
	    {
	        m+=g;
	    }else
	    {
	        m+=k-1;
	    }
	    if (k>b)
	    {
	        m+=b;
	    }else
	    {
	        m+=k-1;
	    }
	    
	    cout<<m+1<<"\n";
	}
	return 0;
}
