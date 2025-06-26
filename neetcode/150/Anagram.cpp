#include <string>
#include <map>

using std::string;

class Solution {
public:
    bool isAnagram(string s, string t) {

        std::map<char, int> map_s;
        std::map<char, int> map_t;

        if (s.length() == t.length()) {
            for (int i = 0; i < s.length(); i++) {
                map_s[s[i]] += 1;
                map_t[t[i]] += 1;
            }

            for (auto const& pair : map_s) {
                if (map_s[pair.first] != map_t[pair.first]) {
                    return false;
                }
            }
            return true;
        } else {
            return false;
        }

    }
};

