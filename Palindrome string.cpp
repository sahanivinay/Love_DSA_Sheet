class Solution{
public:	
	
	
int isPalindrome(string S)
{
    if (S.length() <= 1)
        return 1;
    
    int left = 0;
    int right = S.length() - 1;
    
    while (left < right)
    {
        if (S[left] != S[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    
    return 1;
}

};
