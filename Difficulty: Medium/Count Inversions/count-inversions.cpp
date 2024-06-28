//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
      long long merge(long long arr[], long long s, long long mid, long long e){
        
        long long i = s;
        long long j = mid+1;
        long long k = 0;
        long long aux[e - s + 1];
        long long cnt = 0;
        
        while(i <= mid && j <= e){
            
            if(arr[i] <= arr[j]){
                
                aux[k++] = arr[i++];
                
            }else{
                aux[k++] = arr[j++];
                cnt += (mid - i + 1);
                
            }
            
        }
        
        while(i <= mid) aux[k++] = arr[i++];
        while(j <= e) aux[k++] = arr[j++];
        
        for(int i=s; i<=e; i++){
            arr[i] = aux[i - s];
        }
        
        return cnt;
        
    }
    
    long long mergeSort(long long arr[], long long s, long long e){
        
        long long int cnt = 0;
        
        if(s < e){
            
            long long mid = s + (e - s) / 2;
            cnt += mergeSort(arr, s, mid);
            cnt += mergeSort(arr, mid + 1, e);
            cnt += merge(arr, s, mid, e);
            
        }
        
        return cnt;
        
    }
    long long int inversionCount(long long arr[], int n) {
        // Your Code Here
        
        //******Runtime Error*******
        // long long count =0;
        // for(long long i=0;i<n;i++){
        //     for( long long j=i+1;j<n;j++){
        //         if(arr[i] > arr[j] and i < j){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        long long s = 0;
        long long e = n - 1;
        return mergeSort(arr, s, e);
    }
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends