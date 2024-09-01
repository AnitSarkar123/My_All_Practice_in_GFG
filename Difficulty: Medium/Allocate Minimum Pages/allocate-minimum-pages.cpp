//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
    long long count(int arr[], int mid, int n) {
        int count=0,sum=0;
        for(int i=0;i<n;i++) {
            if(sum + arr[i] <= mid) sum += arr[i];
            else {
                count++;
                sum = arr[i];
            }
        }
        return count;
    }
    long long findPages(int n, int arr[], int m) {
        // code here
        if(n<m) return -1;
        long long low = *max_element(arr,arr+n);
        long long high = accumulate(arr,arr+n,0);
        while(low<=high) {
            long long mid = low + (high-low)/2;
            if(count(arr,mid,n) >= m) low = mid+1;
            else high = mid-1;
        }
        return low;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends