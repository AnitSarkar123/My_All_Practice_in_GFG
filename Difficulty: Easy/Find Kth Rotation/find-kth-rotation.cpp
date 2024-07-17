//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n= arr.size();
    int low = 0, high = n - 1, mid = 0;
        int minNum = INT_MAX, minIdx = n;
        while(low <= high) {
            mid = low + (high - low) / 2;
            if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
                if(minNum > arr[low]) {
                    minNum = arr[low];
                    minIdx = low;
                }
                else if(minNum == arr[low] && minIdx > low) {
                    minIdx = low;
                }
                low++;
                high--;
            }
            else if(arr[low] <= arr[mid]) {
                if(minNum > arr[low]) {
                    minNum = arr[low];
                    minIdx = low;
                }
                else if(minNum == arr[low] && minIdx > low) {
                    minIdx = low;
                }
                low = mid + 1;
            }
            else if(arr[mid] <= arr[high]) {
                if(minNum > arr[mid]) {
                    minNum = arr[mid];
                    minIdx = mid;
                }
                else if(minNum == arr[mid] && minIdx > mid) {
                    minIdx = mid;
                }
                high = mid - 1;
            }
        }
        return minIdx;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends