class Solution{
  public:
    int minJumps(int arr[], int n) {
    int maxi = 0;      // The farthest index reachable from the current position
    int maxRange = 0;  // The farthest index reachable from previous jump
    int jumps = 0;     // Number of jumps taken

    for (int i = 0; i < n; i++) {
        maxi = max(maxi, i + arr[i]);  // Update maxi to the maximum reachable index
        if (maxRange == i) {           // If we have reached the end of the current jump range
            maxRange = maxi;           // Update maxRange to the new maximum reachable index
            jumps++;                   // Increment jumps
            if (maxRange >= n - 1) {    // If we have reached the end of the array
                return jumps;           // Return the number of jumps taken
            }
        }
    }
    
    return -1;  // If we can't reach the end of the array
}

};
