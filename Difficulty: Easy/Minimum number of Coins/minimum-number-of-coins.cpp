class Solution {
  public:
    int findMin(int n) {
        vector<int> denominations = {10, 5, 2, 1}; // largest → smallest
        int count = 0;

        for (int coin : denominations) {
            if (n >= coin) {
                count += n / coin;  // take as many as possible
                n %= coin;          // reduce remaining amount
            }
        }
          return count;
    }
};