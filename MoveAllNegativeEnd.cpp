class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int temp[n],k = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                temp[k]=arr[i];
                k++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                temp[k]=arr[i];
                k++;
            }
        }
        memcpy(arr, temp, sizeof(temp));
    }
};
