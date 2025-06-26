#include <string>
#include <map>
#include <algorithm>
#include <vector>

using std::string;
using std::map;
using std::vector;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::map<string, vector<string>> map;
        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end()); // sort copy (used as key)
            map[key].push_back(s); // insert original string to list
        }

        std::vector<vector<string>> result;
        for (auto& pair : map) {
            result.push_back(pair.second); // build the final result
        }

        return result;
    }
};

