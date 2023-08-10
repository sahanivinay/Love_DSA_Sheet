class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here 
        int row = R;
        int col = C;
        int low = INT_MAX, high = INT_MIN;
        //find min and max element
        for(int i=0;i<row;i++)
        {
            low = min(low,matrix[i][0]);
            high = max(high,matrix[i][col-1]);
        }
        
        int median = low;
        int medianPosition = (row*col+1)/2;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            
            int count = 0;
            //count the number of elements <= mid
            for(int i=0;i<row;i++)
            {
                int index = upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
                count += ((index-1)-0)+1; //{last-first+1}
            }
            
            //if number of elements <= mid value
            if(count<medianPosition){
                low = mid+1;
                median = low;
            }
            else{
                high = mid - 1;
            }
        }
        return median;
    }
};
