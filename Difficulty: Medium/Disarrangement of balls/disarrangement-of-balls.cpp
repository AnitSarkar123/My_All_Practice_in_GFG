// User function Template for C++

class Solution {
  public:
     long int MOD = 1000000007;
    long int solve(int n, vector<long int> &dp){
        if(n==1)
        return 0;
        if(n==2)
        return 1;
        if(dp[n]!=-1){
            return dp[n];
        }
       dp[n]= (n-1) *(solve(n-1, dp) +solve(n-2, dp))%MOD;
       return dp[n];
       
        
    }
  
    long int countDer(int n) {
        vector<long int> dp(n+1, -1);
        
        return solve(n, dp);
        
    }
};