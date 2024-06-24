//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    /*int solveRec(int Wt, int wt[], int val[], int index){
        if(index==0){
            if(wt[0]<= Wt){
                return val[0];
            }else{
                return 0;
            }
        }
        int include =0;
       int exclude =0 +solveRec( Wt, wt,  val,  index-1);
        if(wt[index]<= Wt){
                include = val[index] +solveRec( Wt-wt[index], wt,  val,  index-1);
            
        }
            
    int ans=max(include,exclude);
    return ans;
    }*/
    int solveMemo(int Wt, int wt[], int val[], int index, int dp[][1001]) { // Assuming a maximum Wt of 1000 for array size
    if (index == 0) {
        if (wt[0] <= Wt) {
            return val[0];
        } else {
            return 0;
        }
    }
    if (dp[index][Wt] != -1) {
        return dp[index][Wt];
    }
    
    int include = 0;
    int exclude = solveMemo(Wt, wt, val, index - 1, dp);
    if (wt[index] <= Wt) {
        include = val[index] + solveMemo(Wt - wt[index], wt, val, index - 1, dp);
    }
    
    dp[index][Wt] = max(include, exclude);
    return dp[index][Wt];
}

int knapSack(int W, int wt[], int val[], int n) {
    int dp[n][1001]; // Assuming a maximum W of 1000 for array size

    // Initialize all elements to -1
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < W + 1; ++j) {
            dp[i][j] = -1;
        }
    }
    return solveMemo(W, wt, val, n-1, dp);
}
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends