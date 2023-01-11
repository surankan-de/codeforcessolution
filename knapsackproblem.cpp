//knapsack problem maximising profit using greedy algorithm

#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    float bweight = 15;
    int n = 7;
    float profit[n] = {10,5,15,7,6,18,3};
    float weight[n] ={2,3,5,7,1,4,1};
    //float pwb[n];
    
    
    vector<pair<float,float>> v;
    
    for(int i =0;i<n;i++)
    {
        v.push_back({profit[i]/weight[i],weight[i]});
        
    }
    sort(v.begin(),v.end());
    float pwbas[n] , wbas[n];
    for(int i =0;i<n;i++)
    {
        pwbas[i] = v[i].first;
        wbas[i] = v[i].second;
    }
    
    
    
    
    float profit_1 = 0;
    int index = n-1;
    while(bweight!=0&&index>=0)
    {
        if(bweight>=wbas[index])
        {
            profit_1+=pwbas[index]*wbas[index];
            bweight-=wbas[index];
            index--;
        }else{
            profit_1+=bweight*pwbas[index];
            bweight = 0;
        }
    }
    cout<<profit_1<<endl;
    

    return 0;
}
