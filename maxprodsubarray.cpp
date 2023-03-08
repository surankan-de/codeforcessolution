class Solution{
public:
    typedef long long ll;
    ll lmax(ll a,ll b)
    {
        return (a>b?a:b);
    }
    ll lmin(ll a,ll b)
    {
        return(a<b? a: b);
    }
    
	// Function to find maximum product subarray
	ll maxProduct(vector<int> ar, int n) {
	    //vector<ll> ans;
	    //ans[0] = ar[0];
	    if(n==1)
	    {
	        return ar[0];
	    }
	    
	    vector<ll> mi(n,ar[0]),ma(n,ar[0]);
	    for(int i =1;i<n;i++)
	    {
	        if(ar[i]==0)
	        {
	            mi[i]=0;
	            ma[i] = 0;
	        }else{
	            if(ar[i]!=0&&ar[i-1]==0)
	            {
	                mi[i] = ar[i];
	                ma[i] = ar[i];
	            }else if(ar[i]!=0&&ar[i-1]!=0){
	                mi[i] = lmin(ma[i-1]*ar[i],lmin(ar[i],mi[i-1]*ar[i]));
	                ma[i] = lmax(lmax(ar[i],ma[i-1]*ar[i]),mi[i-1]*ar[i]);
	            }
	        }
	    }
	    ll m = ar[0];
	    for(int i =0;i<n;i++)
	    {
	        m = lmax(m,ma[i]);
	    }
	    
	    //sort(ma.begin(),ma.end());
	    return(m);
	    
	}
};
