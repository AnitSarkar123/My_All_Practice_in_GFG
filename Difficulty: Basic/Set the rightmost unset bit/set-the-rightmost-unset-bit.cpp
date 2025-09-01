class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        return n | (n+1);
    }
};