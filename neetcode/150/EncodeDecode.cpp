
#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded;
        for (const string& str : strs) {
            // using # as a delimiter
            encoded += std::to_string(str.size()) + "#" + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            // find the position of the delimiter
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i));
            decoded.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return decoded;
    }
};
