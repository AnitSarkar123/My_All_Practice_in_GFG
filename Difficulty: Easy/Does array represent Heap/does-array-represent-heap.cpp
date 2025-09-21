
class Solution {
  public:
  
    bool isMaxHeap(int arr[], int n) {
        // Your code goes here
        //int i=0;
        //(n-2)/2 ==to check only non leaf nodes
       // Only need to check non-leaf nodes
        for (int i = 0; i <= (n - 2) / 2; i++) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            // If left child exists and is greater than parent
            if (left < n && arr[i] < arr[left])
                return false;

            // If right child exists and is greater than parent
            if (right < n && arr[i] < arr[right])
                return false;
        }
        return true;
    }
};