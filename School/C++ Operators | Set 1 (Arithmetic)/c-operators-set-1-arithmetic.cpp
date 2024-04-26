//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
         vector <int > ans ;

        int add=A+B;
        int mul=A*B;
        int sub=0;
        int divide =0;

        if (A>B){
             sub=A-B;
             divide =A/B;
        }else{
             sub=B-A;
            divide =B/A;
}
        ans.push_back(add);
        ans.push_back(mul);
        ans.push_back(sub);
        ans.push_back(divide);
        return ans;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends