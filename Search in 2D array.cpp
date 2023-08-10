class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowIdx = searchPotentialRow(matrix, target);
        if (rowIdx != -1)
            return binarySearchOverRow(rowIdx, matrix, target);
        return false;
    }

private:
    int searchPotentialRow(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size() - 1;
        int idx = matrix[0].size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (matrix[mid][0] <= target && target <= matrix[mid][idx]) {
                return mid;
            } else if (matrix[mid][0] < target) {
                low = mid + 1;
            } else if (matrix[mid][0] > target) {
                high = mid - 1;
            }
        }
        return -1;
    }

    bool binarySearchOverRow(int rowIdx, vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix[rowIdx].size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (matrix[rowIdx][mid] == target) {
                return true;
            } else if (matrix[rowIdx][mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return false;
    }
};
