#include <vector>

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        int sum = 0;
        vector<int> res;
        while (i < j) {
            sum = numbers[i] + numbers[j];

            if (sum == target) {
                return {i + 1, j + 1};
            }

            if (sum < target) {
                i++;
            }

            if (sum > target) {
                j--;
            }
        }
        return {};
    }
};

