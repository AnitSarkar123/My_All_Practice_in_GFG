class Solution {
  public:
    void print_divisors(int n) {
        vector<int> res;

        // Loop from 1 to square root of N
        for (int i = 1; i * i <= n; i++) {
            // Check if i divides N
            if (n % i == 0) {
                // Add i to the result
                res.push_back(i);

                // If N / i is different from i, add N / i too
                if (i != n / i) {
                    res.push_back(n / i);
                }
            }
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }

        // Return the list of divisors
        // return res;
    }
};