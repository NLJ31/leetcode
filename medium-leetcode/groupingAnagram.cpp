#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
    public:
    unordered_map<string, vector<string>> store;

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        for (int i = 0 ; i < strs.size(); i++) {
            string key = generateKey(strs[i]);
            
            store[key].push_back(strs[i]);
        }
        vector<vector<string>> res;

        for (auto &i : store) {
            res.push_back(i.second);
        }

        return res;
    }

    string generateKey(string str) {
        sort(str.begin(), str.end());
        return str;
    }
};