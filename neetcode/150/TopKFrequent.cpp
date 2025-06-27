
#include <string>
#include <map>
#include <vector>

using std::string;
using std::map;
using std::vector;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        vector<vector<int>> buckets(nums.size()+1);
        map<int, int> freq;

        for (int i : nums) {
            freq[i]++;
        }

        for (auto& pair : freq) {
            buckets[pair.second].push_back(pair.first);
        }

        // loop over buckets
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};

