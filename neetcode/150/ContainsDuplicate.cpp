#include <map>
#include <vector>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::map<int, int> vals;
        for (int i = 0; i < nums.size(); ++i) {
            if (vals.count(nums[i])) {
                return true;
            } else {
                vals[nums[i]] = nums[i];
            }
        }
        return false;
    }
};
