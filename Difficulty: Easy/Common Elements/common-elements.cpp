//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
           vector<int>v;
        unordered_map<int,int>mp,mp1;
        for(int i=0;i<v1.size();i++)
        {
            mp[v1[i]]++;
        }
        for(int i=0;i<v2.size();i++)
        {
            mp1[v2[i]]++;
        }
        for(int i=0;i<v2.size();i++)
        {
           int key=v2[i];
           if(mp.find(key)!=mp.end())
           {
               int count=min(mp[key],mp1[key]);
               for(int j=0;j<count;j++)
               v.push_back(key);
               
           }
           mp.erase(key);
        }
        sort(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
// } Driver Code Ends