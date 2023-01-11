//knapsack problem maximising profit using greedy algorithm

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    float bweight = 5;
    float profit[5] = {10,15,15,7,6};
    float weight[5] ={2,3,5,7,1};
    float pwb[5];
    for(int i =0;i<5;i++)
    {
        pwb[i]=profit[i]/weight[i];
    }
    vector<pair<float,float>> v;
    for(int i =0;i<5;i++)
    {
        v.push_back({pwb[i],weight[i]});
    }
    sort(v.begin(),v.end());
    float pwbas[5] , wbas[5];
    for(int i =0;i<5;i++)
    {
        pwbas[i] = v[i].first;
        wbas[i] = v[i].second;
    }
    for(int i =1;i<5;i++)
    {
        if (pwbas[i]==pwbas[i-1]&&wbas[i-1]<wbas[i])
        {
            swap(wbas[i-1],wbas[i]);
        }
    }
    float profit_1 = 0;
    int index = 4;
    while(bweight!=0&&index>=0)
    {
        if(bweight>=wbas[index])
        {
            profit_1+=pwbas[index];
            bweight-=wbas[index];
            index--;
        }else{
            profit_1+=bweight/wbas[index]*pwbas[index];
            bweight = 0;
        }
    }
    cout<<profit_1<<endl;
    

    return 0;
}
