
class Solution {
public:
    vector<int> factorial(int N)
{

    vector<int> result;

    // Initialize result with 1
    result.push_back(1);

    for (int i = 2; i <= N; i++)
    {

        // Multiply vector by i
        int carry = 0;

        // Start from end of vector
        for (int j = result.size() - 1; j >= 0; j--)
        {

            int prod = result[j] * i + carry;

            // Update digit
            result[j] = prod % 10;

            // Update carry
            carry = prod / 10;
        }

        // Insert carry at beginning
        while (carry)
        {
            result.insert(result.begin(), carry % 10);
            carry /= 10;
        }
    }

    return result;
}
};
