//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& a) {
        // code here
        int n=a.size();
        int low=0;
        int hi=n-1;
        int mid=0;
     while(mid <=hi){
         switch(a[mid]){
             case 0:
             swap(a[low++],a[mid++]);
             break;
             case 1:
             mid++;
             break;
             case 2:
             swap(a[mid], a[hi--]);
            break;
    }
     }
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends