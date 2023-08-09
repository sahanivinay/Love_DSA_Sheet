class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here int n = height.size();

        vector<int> max_left(n,0);
        vector<int> max_right(n,0);

        for(int i = 1; i < n; i++){
            max_left[i] = max(max_left[i - 1], arr[i - 1]);
            max_right[n - 1 - i] = max(max_right[n - i], arr[n - i]);
        }

        long sum = 0;

        for(int i = 0; i < n; i++){
            int temp = min(max_left[i], max_right[i]);
            if(temp > arr[i])
               sum += temp - arr[i];
        }

        return sum;
        
    }
};
