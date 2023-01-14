//METHOD 1 my method

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    string s = s1+s2;
    if(s.length() == s3.length())
    {
        map<char ,int> m1,m2;
        for(int i =0;i<s.length();i++)
        {
            m1[s[i]]++;
            m2[s3[i]]++;
            
        }
        set<pair<char,int>> se1,se2;
        for(pair<char,int> p: m1)
        {
            se1.insert(p);
        }
        for(pair<char,int> p: m2)
        {
            se2.insert(p);
        }
        
        if(se1==se2)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }
    return 0;
}


//METHOD 2 using sort by function

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<char, int> &a, 
               const pair<char, int> &b) 
{ 
    return (a.first < b.first); 
} 

int main() {
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    string s = s1+s2;
    if(s.length() == s3.length())
    {
        map<char ,int> m1,m2;
        for(int i =0;i<s.length();i++)
        {
            m1[s[i]]++;
            m2[s3[i]]++;
            
        }
        vector<pair<char,int>> v1,v2;
        for(pair<char,int>p:m1)
        {
            v1.push_back(p);
        }
        for(pair<char,int>p:m2)
        {
            v2.push_back(p);
        }
        
        sort(v1.begin(),v1.end(),sortByVal);
        sort(v2.begin(),v2.end(),sortByVal);
        if(v1==v2)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }

    return 0;
}
