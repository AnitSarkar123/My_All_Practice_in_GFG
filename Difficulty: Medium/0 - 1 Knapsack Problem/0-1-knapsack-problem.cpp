class Solution {
  public:
    int solveRec(int W, vector<int> &val, vector<int> &wt,int n){
        if(n==0){
            if(wt[0]<=W){
                return val[0];
            }
            else{
                return 0;
            }
        }
        int include=0;
        int exclude=0;
        if(wt[n]<=W)
            include =val[n]+solveRec(W-wt[n],val,wt,n-1);
        
        
        exclude =0+solveRec(W,val,wt,n-1);
    
        int ans =max(include,exclude);
        return ans;
    }
    int solveMemo(int W, vector<int> &val, vector<int> &wt,int n,vector<vector<int> > &dp){
        if(n==0){
            if(wt[0]<=W){
                return val[0];
            }
            else{
                return 0;
            }
        }
        if(dp[n][W]!= -1){
            return dp[n][W];
        }
        int include=0;
        int exclude=0;
        if(wt[n]<=W)
            include =val[n]+solveRec(W-wt[n],val,wt,n-1);
        
        
        exclude =0+solveRec(W,val,wt,n-1);
    
        dp[n][W] =max(include,exclude);
        return dp[n][W];
    }
    int solveTab(int W, vector<int> &val, vector<int> &wt,int n){
        vector<vector<int> > dp(n, vector<int>(W+1, 0));
        
        for(int w = wt[0]; w <= W; w++) {
		if(wt[0] <= W)
			dp[0][w] = val[0];
		else
			dp[0][w] = 0;
	    }
	    
        for(int i=1;i<n;i++){
            for(int w=0;w<=W;w++){
                int include = 0;
			if(wt[i] <= w)
				include = val[i] + dp[i-1][W-wt[i]];
			
			int exclude = 0 + dp[i-1][w];

			dp[i][w] = max(include, exclude);	
            }
        }
        return dp[n-1][W];
    }
      
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        //int n=val.size();
        // return solveRec(W,val,wt,n);
        // vector<vector<int> > dp(n, vector<int>(W+1, -1));
       // return solveTab(W,val,wt,n);
          int n = val.size();
        vector<int>dp(W+1,0);
        
        for(int i = 0; i < n; i++){
            for(int w = W; w >= wt[i]; w--){
                dp[w] = max(dp[w], dp[w-wt[i]] + val[i]);
            }
        }
        
        return dp[W];
    
        
    }
};