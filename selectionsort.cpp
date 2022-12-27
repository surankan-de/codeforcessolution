#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int ar[10] = {21,32,45,6,12,34,67,100,23,4};
    
    for (int i = 0;i<9;i++)
    {
        for(int j =i+1 ;j<10;j++)
        {
            if (ar[j]<ar[i])
            {
                int temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
    for(int x: ar)
    {
        cout<<x<<" ";
    }

    return 0;
}
