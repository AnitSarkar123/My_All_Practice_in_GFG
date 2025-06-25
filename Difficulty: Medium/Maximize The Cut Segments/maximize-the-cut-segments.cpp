class Solution {
  public:
    // Function to find the maximum number of cuts.
    int solve(int n, int x, int y, int z){
        if(n==0){
            return 0;
        }
        if(n<0){
            return INT_MIN;
        }
        int a=solve(n-x,x,y,z)+1;
        int b=solve(n-y,x,y,z)+1;
        int c=solve(n-z,x,y,z)+1;
        int ans =max(a,max(b,c));
        return ans;
    }
    int solve2(int n, int x, int y, int z,vector<int>&dp){
        if(n==0){
            return 0;
        }
        if(n<0){
            return INT_MIN;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int a=solve(n-x,x,y,z)+1;
        int b=solve(n-y,x,y,z)+1;
        int c=solve(n-z,x,y,z)+1;
        dp[n] =max(a,max(b,c));
        return dp[n];
    }
    int solve3(int n, int x, int y, int z) {
	
    // //step-1: creation of dp array
	// vector<int> dp(n+1, INT_MIN);
	// //step-2
	// dp[0] = 0;
	// //step-3
	// for(int i=1; i<=n; i++) {
	// 	if(i-x >= 0)
	// 		dp[i] = max(dp[i], dp[i-x] + 1) ;
	// 	if(i-y >= 0)
	// 		dp[i] = max(dp[i], dp[i-y] + 1) ;
	// 	if(i-z >= 0)
	// 		dp[i] = max(dp[i], dp[i-z] + 1) ;
	// }
	// //step-4	
	// return dp[n];
    

    //step-1: creation of dp array
	vector<int> dp(n+1, -1);
	
	//step-2
	dp[0] = 0;

	//step-3
	for(int i=1; i<=n; i++) {
		if(i-x >= 0 && dp[i-x] != -1)
			dp[i] = max(dp[i], dp[i-x] + 1) ;

		if(i-y >= 0 && dp[i-y] != -1)
			dp[i] = max(dp[i], dp[i-y] + 1) ;
			
		if(i-z >= 0 && dp[i-z] != -1)
			dp[i] = max(dp[i], dp[i-z] + 1) ;
	}
	//step-4	
	return dp[n];
}
    int maximizeTheCuts(int n, int x, int y, int z) {
        // Your code here
        // int ans=solve(n,x,y,z);
        // if(ans <0){
        //     return 0;
        // }
        // return ans;
        // vector<int>dp(n+1,-1);
        // int ans=solve2(n,x,y,z,dp);
        // if(ans <0){
        //     return 0;
        // }
        // return ans;
        int ans = solve3(n, x, y, z);
	if(ans < 0)
		return 0;
	else
		return ans;
    }
};