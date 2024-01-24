//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int size, int key) {
       int start = 0;
    int end = size-1;

    // int mid = (start+end)/2;

    // Formula to avoid overflowed values
    int mid = start + (end-start)/2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            // Go to right part
            start = mid + 1;
        } else {
            // Go to left part
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends