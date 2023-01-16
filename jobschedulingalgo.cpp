//job scheduling using greedy method

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int profit[7] = {35,30,25,20,15,12,5};
    int wait[7] = {3,4,4,2,3,1,2};
    int max_wait = 4;
    int res[max_wait] = {0,0,0,0};
    for(int i =0;i<max_wait;i++)
    {
        int counter = wait[i]-1;
        while(counter>=0)
        {
            if(res[counter]==0)
            {
                res[counter] = profit[i];
                counter = -1;
            }else{
                counter--;
            }
        }
    }
    for(int x: res)
    {
        cout<<x<<endl;
    }
    
    return 0;
}
