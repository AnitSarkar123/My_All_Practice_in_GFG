// User function Template for C++

class Solution {
  public:
  void modify(int idx,vector<int> &arr, int N){
        if(2*idx+1>=N && 2*idx+2>=N){
            return;
        }
        int maxIdx = 2*idx+1;
        if(2*idx+2<N){
            if(arr[2*idx+2]>arr[maxIdx]){
                maxIdx = 2*idx+2;
            }
        }
        swap(arr[idx],arr[maxIdx]);
        modify(maxIdx,arr,N);
    }
    void convertMinToMaxHeap(vector<int> &arr, int N) {
        int n = N-1;
        for(int i=n/2;i>=0;i--){
            modify(i,arr,N);
        }
    }

    
};
