//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  int findLowerBound(vector<int> nums)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int lowerBountIndex = nums.size();
    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        if (nums[middle] >= 1)
        {
            lowerBountIndex = middle;
            high = middle - 1;
        }
        else{
            low = middle + 1;}
    }
    return lowerBountIndex;
}
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        
    int n = arr.size();
    int m = arr[0].size();
    int rowIndex = -1;
    int previousRowSum = 0;
    for (int index = 0; index < n; index++)
    {
        int sum = m - findLowerBound(arr[index]);
        if (sum > previousRowSum)
        {
            previousRowSum = sum;
            rowIndex = index;
        }
    }
    return rowIndex;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends