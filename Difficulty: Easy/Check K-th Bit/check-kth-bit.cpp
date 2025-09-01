class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        if((n&(1<<k))!=0){
            return true;
        }
        return false;
    }
};