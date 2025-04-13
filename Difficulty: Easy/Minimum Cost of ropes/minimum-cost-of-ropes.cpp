//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        //step-1 : create a minHeap using priority queue
        priority_queue<int , vector<int>, greater<int> > pq;
        int n=arr.size();
        //step-2 : push all elements into the priority queue
        for(int i=0; i<n; i++){
            pq.push(arr[i]);
        }
        
        //step-3 : calculate minimum cost
        int cost = 0;
    
        while(pq.size() > 1){
            
            int a = pq.top();
            pq.pop();
            
            int b = pq.top();
            pq.pop();
            
            int sum = a + b;
            
            cost += sum;
            
            pq.push(sum);
        }
        return cost;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends