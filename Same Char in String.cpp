class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        int count=0;
        int i=0;
        while(i<A.length() && i<B.length()){
            if(tolower(A[i])==tolower(B[i]))
            count++;
            i++;
        }
        return count;
    }
};
