//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
             int miss=-1;
        int twice=-1;
        vector<int>temp;
  unordered_map<int,int>visited;
  for(int i=1;i<=n;i++){
      visited[i]=0;
  }
  for(int i=0;i<n;i++){
      visited[arr[i]]++;   
  }
   for(int i=1;i<=n;i++){
     if( visited[i]==0){
         miss=i;
         break;
     }
  }
  for(int i=1;i<=n;i++){
     if( visited[i]==2){
         twice=i;
         break;
     }
  }
  temp.push_back(twice);
  temp.push_back(miss);
  return temp;
        }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends