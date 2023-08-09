class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        int ans = 0;
        for(int i=0;i<n-2;i++)
        {
            int l = i+1;
            int r = n-1;
            while(l<r){
                if(A[i]+A[l]+A[r] == X)
                {
                    ans = 1;
                    break;
                }
                else if(A[i]+A[l]+A[r] < X)
                l++;
                else
                r--;
            }
            if(ans==1)
            break;
        }
     
     return ans;
    }

};
