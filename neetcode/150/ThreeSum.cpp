#include <vector>
#include <algorithm>

using std::vector;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); ++i) {
            // skip dupes for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;


            int target = 0 - nums[i]; 
            
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k) {
                int sum = nums[j] + nums[k];
                
                if (sum == target) {
                    res.push_back({nums[i], nums[j], nums[k]});
                    
                    // skip dupes for j, k
                    while (j < k && nums[j] == nums[j + 1]) ++j;
                    while (j < k && nums[k] == nums[k - 1]) --k;
                    
                    j++;
                    k--;
                }

                if (sum < target) {
                    j++;
                }

                if (sum > target) {
                    k--;
                }
                
            }
        }
        return res;
    }
};

