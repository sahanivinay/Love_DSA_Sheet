class Solution {
  public:
    int countSquares(int N) {
        // code here
        int temp = sqrt(N);
        if(temp*temp==N) return temp-1;
        else return temp;
    }
};
