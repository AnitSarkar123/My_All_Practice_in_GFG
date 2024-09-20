//{ Driver Code Starts
// C++ program to search an element in an array
// where difference between all elements is 1
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.

class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int i = 0;
        while (i < n) {
            if (arr[i] == x) {
                return i;
            }
            i += max(1, abs(arr[i] - x) / k);
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int k, x;
        cin >> k >> x;
        Solution sol;
        int ans = sol.findStepKeyIndex(arr, k, x);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends