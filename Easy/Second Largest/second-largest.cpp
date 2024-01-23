//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	        // code here
        sort(arr,arr+n);
        int result = 0;
        
for(int i=n-1; i>0; i--) {
if(arr[i]!=arr[i-1]) {
result = arr[i-1];
break;
}
}
 
if(result ==0)
    result = -1;
 
return result;
    }
	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends