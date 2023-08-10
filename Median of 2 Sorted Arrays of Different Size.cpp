class Solution{
    public:

        double MedianOfArrays(vector<int>& array1, vector<int>& array2)
        {
            int size = array1.size() + array2.size();
            int mid = size / 2; // Calculating mid value only once
            int i = 0, j = 0; // Pointers for iterating through arrays
            int prev = 0, curr = 0; // Variables to store current and previous values during iteration
            
            for (int count = 0; count <= mid; count++)
            {
                prev = curr;
                
                if (i < array1.size() && (j >= array2.size() || array1[i] < array2[j]))
                {
                    curr = array1[i];
                    i++;
                }
                else
                {
                    curr = array2[j];
                    j++;
                }
            }
            
            if (size % 2 == 0)
            {
                return static_cast<double>(prev + curr) / 2.0;
            }
            else
            {
                return static_cast<double>(curr);
            }
        }

};
