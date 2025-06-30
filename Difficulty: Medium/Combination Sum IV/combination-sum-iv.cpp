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
    int combinationSum4(vector<int>& arr, int key) {
        // complete the function here
        // return solveRec( arr,  key);
        vector<int>dp(key+1,-1);
        return solveMem( arr,  key,dp);
        
        
    }
};