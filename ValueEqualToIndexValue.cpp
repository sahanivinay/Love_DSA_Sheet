class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> result;

        for (int i = 0; i < n; i++) {  // Start the loop from 0
        if (arr[i] == i + 1) {     // Compare with i + 1, since array indices are 0-based
            result.push_back(i + 1);
        }
    }

    return result;
	}
};
