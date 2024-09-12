//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if(nums.size()%2!=0) return 0;
        map<int,int> m;
        for(auto i:nums){
            int rem=i%k;
            int comp=(k-rem)%k;
            if(m[comp]) m[comp]--;
            else m[rem]++;
            if(m[comp]==0) m.erase(comp);
        }
        return m.empty();
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends