class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        // code here
        int XOR = 0, no1 = 0, no2 = 0;

        // XOR of all elements
        for (size_t i = 0; i < arr.size(); i++)
            XOR ^= arr[i];

        // Get rightmost set bit
        int rightmost = XOR & (~(XOR - 1));

        // Divide numbers into two groups
        for (size_t i = 0; i < arr.size(); i++) {
            if (arr[i] & rightmost)
                no1 ^= arr[i];
            else
                no2 ^= arr[i];
        }

        // Return in descending order
        if (no1 > no2)
            return {no1, no2};
        else
            return {no2, no1};
    }
};