



class Solution {
 public:
  int add(int a, int b) {
    return (a + b);
  }

  int mul(int a, int b) {
    return (a * b);
  }

  int solve(int n, int k) {
    // Handle the base case where n=1 posts.
    // The code should return k ways.
    if (n == 1) {
        return k;
    }

    // Step-1: Initialize for n=1 and n=2
    // prev2 now correctly represents ways for n=1
    int prev2 = k;
    // prev1 now correctly represents ways for n=2
    int prev1 = add(k, mul(k, k - 1));

    // Step-2: Iterate from n=3 up to the nth post
    // This loop is correctly skipped for n=2.
    for (int i = 3; i <= n; i++) {
        int ans = add(mul(prev1, k - 1), mul(prev2, k - 1));
        prev2 = prev1;
        prev1 = ans;
    }

    // Step-3: Return the result.
    // For n > 1, prev1 will hold the correct answer.
    return prev1;
  }

  int countWays(int n, int k) {
    // A good practice is to handle n=0 case as well.
    if (n == 0) {
        return 0;
    }
    return solve(n, k);
  }
};