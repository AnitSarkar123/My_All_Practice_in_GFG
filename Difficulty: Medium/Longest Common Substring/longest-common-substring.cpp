class Solution {
  public:
    int longCommSubstr(string& s1, string& s2) {
        // code here
        int n = s1.size();
        int m = s2.size();
    
        // Initialize a 2D DP table with dimensions
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        // Initialize the answer variable
        int ans = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                // Characters match, increment substring length
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    
                    /* Update the maximum substring 
                    length found so far */
                    ans = max(ans, dp[i][j]);
                } else {
                    /* Characters don't match, 
                    substring length becomes 0 */
                    dp[i][j] = 0;
                }
            }
        }
        // Return the length of Longest Common Substring
        return ans;
    }
};