//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int i=0,j=0,c=0;
        bool flag;
        while(i<arr1.size() and j<arr2.size()){
            c++;
            if(arr1[i]>arr2[j]){
               j++; 
               flag=0;
            } 
            else{
                i++;
                flag=1;
            }
            if(c==k and flag==0) return arr2[j-1];
            else if(c==k and flag==1) return arr1[i-1];
        }
          while(i!=arr1.size()){
            c++;
            i++;
            if(c==k) return arr1[i-1];
        }  
            while(j!=arr2.size()){
            c++;
            j++;
            if(c==k) return arr2[j-1];
        }
        
        
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends