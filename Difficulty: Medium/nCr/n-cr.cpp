//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int nCr(int n, int r){
        // code here
       int mod=1e9+7;
        // int i,j;
        // vector<vector<int>>dp(n+1,vector<int>(r+1,0));
        // for(i=0;i<=n;i++){
        //     dp[i][0]=1;
        // }
        // for(i=0;i<=n;i++){
        //     for(j=1;j<=min(i,r);j++){
        //         dp[i][j]=(dp[i-1][j]%mod + dp[i-1][j-1]%mod)%mod;
        //     }
        // }
        // return dp[n][r];}
        
        //pascal triangle method
        if(n<r){
            return 0;
        }
        if((n-r)<r){
            r= n-r;
        }
        int dp[r+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
         for(int i=1;i<=n;i++){
            for(int j=min(i,r);j>0;j--){
                dp[j]=(dp[j] + dp[j-1])%mod;
            }
        }
        return dp[r];
}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends