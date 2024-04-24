//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        set<char>st;
        for(auto ch:patt){
            st.insert(ch);
        }
        int mini=INT_MAX;
        for(int i=0;i<str.length();i++){
                if(st.find(str[i])!=st.end()){
                mini = min(mini,i);
        }}
         return mini==INT_MAX?-1:mini;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends