class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      set<int> seen;
    for (int num : nums) {
        if (seen.count(num) > 0) {
            return num; // Found a duplicate
        }
        seen.insert(num);
    }

    return -1; // No duplicate found
    }
};
