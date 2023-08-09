class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long maxi = INT_MIN;
	    long long pre = 1, suf = 1;
	    for(int i=0;i<n;i++){
	        if(pre==0) pre = 1;
	        if(suf==0) suf = 1;
	        pre = pre * arr[i];
	        suf = suf * arr[n-i-1];
	        maxi = max(maxi,max(pre,suf));
	    }
	    return maxi;
	}
};
