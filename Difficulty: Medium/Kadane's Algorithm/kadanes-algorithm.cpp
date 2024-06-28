//{ Driver Code Starts
// Initial Template for C++

// } Driver Code Ends
// User function Template for C++
#include<bits/stdc++.h>
class Solution {
  public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {

        // Your code here
          long currSum =0;
        long maxSum = INT_MIN;
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            if(currSum>maxSum) maxSum=currSum;
            if(currSum<0) currSum=0;
        }
        return maxSum;
    }
};

//{ Driver Code Starts.
#include <bits/stdc++.h>
using namespace std;

//Position this line where user code will be pasted.

int main() {
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends