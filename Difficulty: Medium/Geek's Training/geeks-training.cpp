class Solution {
  public:
    int maximumPoints(vector<vector<int>>& mat) {
        // code here
        array<int, 3> dp = {0, 0, 0};

        for (const auto &day : mat) {
            std::array<int, 3> ans;
            for (int i = 0; i < 3; i++) {
                ans[i] = day[i] + max(dp[(i + 1) % 3], dp[(i + 2) % 3]);
            }
            dp = ans;
        }
        return *std::max_element(dp.begin(), dp.end());
    }
};