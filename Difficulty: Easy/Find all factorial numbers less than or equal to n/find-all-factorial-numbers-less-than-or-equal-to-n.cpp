//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> ans;
   long long f=1;//STORE VALUE OF FACTORIAL
   for(int i=1;i<=n;i++){//LOOP TO ADD VALUE TO VECTOR 
       f=i*f;
       if(f>n){
           return ans;
       }
       else{
           ans.push_back(f);
       }
   }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends