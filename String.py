 def subArraySum(self, arr, n, s):
        if s == 0:
            # Handle the special case when s is 0
            for i in range(n):
                if arr[i] == 0:
                    return [i + 1, i + 1]
            return [-1]
    
        start = 0
        end = 0
        curr_sum = 0
    
        while end < n:
            curr_sum += arr[end]
    
            while curr_sum > s:
                curr_sum -= arr[start]
                start += 1
    
            if curr_sum == s:
                return [start + 1, end + 1]
    
            end += 1
    
        return [-1]
