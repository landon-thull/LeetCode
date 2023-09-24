// source : https://leetcode.com/problems/group-anagrams
// author : Landon Thull
// date   : 09-23-2023


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;

        unordered_map<string, int> m;
        int i = 0;

        if (strs.size() == 1) {
            return {{strs[0]}};
        }

        for (string str : strs) {
            string o = str;
            sort(o.begin(), o.end());

            if (m.count(o) != 0) {
                out[m[o]].push_back(str);
            } else {
                vector<string> n{str};
                m[o] = i;
                out.push_back(n);
                i++;
            }
        }

        return out;
    }
};