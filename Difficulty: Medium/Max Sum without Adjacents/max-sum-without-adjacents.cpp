// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int solveSpaceOpt(vector<int>& nums) {
    int n = nums.size();

    int prev1 = nums[0];
    int prev2 = 0;

    for(int i=1; i<n; i++) {
        int incl = prev2 + nums[i];
        int excl = prev1 + 0;

        int ans = max(incl, excl);

        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
    int findMaxSum(vector<int>& nums) {
        // code here
         return solveSpaceOpt(nums);
        
    }
};