int maxProfit(vector<int>&price){
    //Write your code here..
    int n = price.size();
    int dp[n];
    for(int i=0;i<n;i++) dp[i] = 0;
    int ma = price[n-1];
    int mi = price[0];
    for(int i=n-2;i>0;i--)
    {
        if(price[i]>ma) ma = price[i];
        dp[i] = max(dp[i+1],ma-price[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(price[i]<mi) mi = price[i];
        dp[i] = max(dp[i-1],dp[i]+(price[i]-mi));
    }
    return dp[n-1];
}
