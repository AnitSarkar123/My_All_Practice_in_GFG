class Solution {
  public:
    int solveRec(vector<int>& arr, int key){
        if(key ==0){
            return 1;
        }
        if(key <0){
            return 0;
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans=ans+solveRec(arr,key -arr[i]);
        }
        return ans;
    }
    int solveMem(vector<int>& arr, int key,vector<int>&dp){
        if(key ==0){
            return 1;
        }
        if(key <0){
            return 0;
        }
        if(dp[key] != -1){
            return dp[key];
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans=ans+solveMem(arr,key -arr[i],dp);
        }
        dp[key]=ans;
        return dp[key];
    }
    int solveTab(vector<int>& arr, int key){
        vector<int>dp(key+1,0);
        dp[0]=1;
        for(int i=1;i<=key;i++){
            for(int j=0;j<arr.size();j++){
                if(i-arr[j]>=0){
                dp[i]=dp[i]+dp[i-arr[j]];
                }
            }
        }
        return dp[key];

    }
    int combinationSum4(vector<int>& arr, int key) {
        // complete the function here
        // return solveRec( arr,  key);
        //vector<int>dp(key+1,-1);
        //return solveMem( arr,  key,dp);
        return solveTab(arr,  key);
        
        
    }
};