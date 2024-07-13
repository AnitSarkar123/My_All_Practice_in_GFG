//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int nums[], int n, int x) {
    
    //sorting so we can apply binary search
    sort(nums, nums + n);
    
    //initlizing start and end to 0 and n-1
    int s = 0;
    int e = n - 1;
    
    //set lower bound or floor to -1
    int lb = -1;
    
    //finding lower bound if any
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[mid] <= x) {
            lb = nums[mid];
            s = mid + 1;
        } 
        else e = mid - 1;
    }
    
    // again initlizing start and end to 0 and n-1
    s = 0;
    e = n - 1;
    
    //set upper bound or ceil to -1
    int ub = -1;
    
    //finding upper bound if any
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[mid] >= x) {
            ub = nums[mid];
            e = mid - 1;
        } 
        else s = mid + 1;
    }
    
    //storing upper bound and lower bound in a pair and returning it
    pair<int, int> res;
    res.first = lb;
    res.second = ub;
    return res;
    
}