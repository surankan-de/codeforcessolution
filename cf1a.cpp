#include <iostream>
using namespace std;
 
 double ceil(double x);
 
 int main() 
{    
    double m,n,a;
    cin>>m>>n>>a;
    double sidem = ceil(m/a);
    double siden = ceil(n/a);
    double p = sidem*siden;
    unsigned long long int x = p;
    cout<<x<<endl;
    return 0;
}
 
 
double ceil(double x){
    double y;
    if (int(x)!=x)
    {
        y = int(x)+1;
    }else
    {
        y = x;
    }
    return y;
    
}

