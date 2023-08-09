class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i = 0, j = 0, k = 0;
            vector<int>ans;
            while(i<n1 and j<n2 and k<n3)
            {
                if(A[i] == B[j] and B[j]==C[k])
                {
                    ans.push_back(A[i]);
                    i++,j++,k++;
                }else if(A[i]<B[j]){
                    i++;
                }
                else if(B[j]<C[k]) j++;
                else k++;
                int xx = A[i-1];
                while(A[i] == xx) i++;
                int yy = B[j-1];
                while(B[j] == yy) j++;
                int zz = C[k-1];
                while(C[k] == zz) k++;
            }
            if(ans.size() == 0)
                return {-1};
            
            return ans;
        }

};
