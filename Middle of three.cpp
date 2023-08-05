class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int mi = min(min(A,B),C);
        int ma = max(max(A,B),C);
        return (A+B+C)-(mi+ma);
    }
};
