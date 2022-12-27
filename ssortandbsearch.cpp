// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int ar[10] = {21,32,45,6,12,34,67,100,23,4};
    int key = 12;
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
    
    int start =0;
    int end = 9;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(ar[mid]==key)
        {
            cout<<mid;
            break;
        }else if(ar[mid]>key)
        {
            end = mid-1;
        }else
        {
            start = mid+1;
        }
    }

    return 0;
}
