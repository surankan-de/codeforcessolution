//creates heap from existing array

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void heapify(int ar[],int len,int node);

int main()
{
    int ar[7]={20,30,31,69,420,94,97};
    
    
    for(int i =6;i>=0;i--)
    {
        heapify(ar,7,i);
    }
    for(int i =0;i<7;i++)
    {
        cout<<ar[i]<<" ";
    }
    
   return 0 ; 
}

void heapify(int ar[],int len,int node)
{
    int k ;
    int left = 2*node+1;
    int right = 2*node+2;
    
    if(left<len&&ar[node]<ar[left])
    {
        k = left;
        swap(ar[node],ar[k]);
        heapify(ar,len,k);
        
        
    }
    if(right<len&&ar[node]<ar[right])
    {
        k = right;
        swap(ar[node],ar[k]);
        heapify(ar,len,k);
    }
    
    
}
