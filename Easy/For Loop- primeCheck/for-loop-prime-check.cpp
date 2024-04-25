//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string isPrime(int n) {
        
        // Code here
        int f=0;
        if(n==0||n==1){
            f=1;
        }
        // sqrt(n)
        for (int i = 2; i <=sqrt(n) ; i++) {
            // Write your logic here
            if(n%i==0){
                f=1;
                break;
            }
            // Return "Yes" if n is prime, else return "No"
            /*n is prime only if it is not divisible by any i.
            We will not reach till n and 1 is already discarded*/

            // return  Yes if n is a prime number ,else return No
            
        }
        if(f==1){
            return "No";
        }
        return "Yes";
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        string res = obj.isPrime(n);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends