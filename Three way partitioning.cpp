class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array, int a, int b)
    {
        int n = array.size();
        int l = 0, r = n - 1;
    
        for (int i = 0; i <= r;) { 
            if (array[i] < a) {
                swap(array[i], array[l]);
                l++;
                i++; 
            } else if (array[i] > b) {
                swap(array[i], array[r]);
                r--;
            } else {
                i++; 
            }
        }
    }

};
