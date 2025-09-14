// User function Template for C++

class Solution {
  public:
    // Helper function to get XOR from 0 to x
    int xorUpto(int x) {
        if (x % 4 == 0) return x;
        if (x % 4 == 1) return 1;
        if (x % 4 == 2) return x + 1;
        return 0;
    }
    int findXOR(int l, int r) {
        // XOR from l to r = xorUpto(r) ^ xorUpto(l-1)
        return xorUpto(r) ^ xorUpto(l - 1);
    }
    
};