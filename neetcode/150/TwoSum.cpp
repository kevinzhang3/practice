#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];

            if (map.count(diff)) {
                return {map[diff], i};
            } else {
                map[nums[i]] = i;
            }
        }
        return {};
    }
};

