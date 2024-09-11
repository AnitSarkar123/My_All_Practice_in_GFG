//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  int solve(int k,int n,int arr[],long long mid){
        int board = 1;
    long long tim = 0;

    for (int i = 0; i < n; i++) {
        if (tim + arr[i] > mid) {
            board++;
            tim = arr[i];
        } else {
            tim += arr[i];
        }
    }

    return (board <= k) ? 1 : 0;

    }
    
  public:
    long long minTime(int arr[], int n, int k)
    {
        
         int l=arr[0];
         long long high=0;
        for (int i=0;i<n;i++){
            l=max(l,arr[i]);
            high+=arr[i];
        }
        long long low=l;
         long long ans=-1;
        while (low<=high){
             long long mid=low+(high-low)/2;
            if (solve(k,n,arr,mid)==1){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends