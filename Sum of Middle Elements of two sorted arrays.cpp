class Solution {
public:
      int findMidSum(int ar1[], int ar2[], int n) {
        int size = n * 2;
        int temp[size], k = 0; // Initialize k to 0
        int mid, sum;
    
        for (int i = 0; i < n; i++) {
            temp[k] = ar1[i];
            k++; // Increment k after adding an element
        }
        for (int i = 0; i < n; i++) {
            temp[k] = ar2[i];
            k++; // Increment k after adding an element
        }
    
        sort(temp, temp + size); // Sort the merged array
    
        if (size % 2 == 0) {
            mid = size / 2;
            sum = temp[mid - 1] + temp[mid];
            return sum;
        } else {
            mid = size / 2;
            sum = temp[mid];
            return sum;
        }
    }

};
