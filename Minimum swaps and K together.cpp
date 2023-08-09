class Solution
{
public:
   int minSwap(int arr[], int n, int k) {
    int fav = 0, nonFav = 0;
    
    // Count the number of elements less than or equal to k
    for (int i = 0; i < n; i++) {
        if (arr[i] <= k) fav++;
    }
    
    // Count the number of elements greater than k in the first 'fav' elements
    for (int i = 0; i < fav; i++) {
        if (arr[i] > k) nonFav++;
    }
    
    int l = 0, r = fav - 1, result = INT_MAX;
    
    while (r < n) {
        result = min(result, nonFav);
        
        r++;
        if (r < n && arr[r] > k) nonFav++;
        if (l < n && arr[l] > k) nonFav--; 
        l++;
    }
    
    return (result == INT_MAX) ? 0 : result;
}

};
