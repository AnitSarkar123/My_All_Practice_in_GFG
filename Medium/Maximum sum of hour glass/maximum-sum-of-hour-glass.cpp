//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        // code here
        int sum=-1;
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                int first=mat[i][j]+mat[i][j+1]+mat[i][j+2];
                int second=mat[i+1][j+1];
                int third=mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
                int total=first+second+third;
                sum=max(sum,total);
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends