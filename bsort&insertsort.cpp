//bubble sort algorithm from scratch
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int ar[5] = {23,45, 34, 78,1};
    for(int i =0;i<5;i++)
    {
        for(int j =0;j<(5-i);j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    for(int i =0;i<5;i++)
    {
        cout<<ar[i]<<"\n";
    }

    return 0;
}


//code for insertion sort



#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int ar[5] = {23,12,5,67,1};
    
    for(int i =1;i<5;i++)
    {
        int temp = ar[i];
        int j =i-1;
        while(ar[j]>temp&&j>=0)
        {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = temp;
    }
    for(int x: ar)
    {
        cout<<x<<"\n";
    }
    return 0;
}
