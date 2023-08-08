class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int major = a[0];
        int count = 1;
        for(int i=0;i<size;i++)
        {
            if(a[i] == major)
            {
                count++;
            }else{
                count--;
                if(count == 0){
                    major = a[i];
                    count = 1;
                }
            }
        }
        count = 0;
        for(int i=0;i<size;++i)
        {
            if(a[i] == major)
            {
                count++;
            }
        }
        
        if(count > size/2){
            return major;
        }
        else{
            return -1;
        }
    }
};
