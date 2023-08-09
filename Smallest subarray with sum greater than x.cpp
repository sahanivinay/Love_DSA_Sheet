class Solution{
  public:

       int smallestSubWithSum(int arr[], int n, int x) {
        int curr = 0, minLen = n + 1; // Initialize minLen with a value greater than n
        int start = 0, end = 0;
        
        while (end < n) {
            while (curr <= x && end < n)
                curr += arr[end++];
            
            while (curr > x && start < n) {
                if (end - start < minLen)
                    minLen = end - start; // Update minLen here
                curr -= arr[start++];
            }
        }
        
        return minLen <= n ? minLen : 0; // Check if a valid subarray was found
    }

};
