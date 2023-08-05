
 vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            ans.push_back(i);
            break;
        }
    }
    
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            ans.push_back(i);
            break;
        }
    }
    
    if(ans.empty())
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
    
    return ans;
}

vector<int> find(int arr[], int n , int x )
{
    int first = -1 , last = -1;
    first = lower_bound(arr,arr+n,x) - arr;
  
    last = upper_bound(arr,arr+n,x)-arr - 1;
    if(arr[first] == x and arr[last] == x){
        return {first,last};
    }
    return {-1,-1};
}
