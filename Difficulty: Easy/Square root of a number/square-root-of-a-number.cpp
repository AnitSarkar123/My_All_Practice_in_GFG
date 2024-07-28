//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int num) 
    {
    int s = 0;
    int e = num;
    long long int ans = -1;

    while( s <= e ) {
        
        long long int mid = s + ( e - s )/2;
        long long int sqrt = mid * mid;

        if( sqrt == num ) {
            return mid;
        }
        if(sqrt < num) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends