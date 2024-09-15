#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


class Solution {
    vector<char> store;
    unordered_map<char, int> storeIndex;
    public:
    int firstUniqChar(string s) {
        
        for (int c = 0; c < s.length() ; c++) {
            auto it = find(store.begin(), store.end(), s[c]);
            if ((it == store.end()) && (storeIndex.find(s[c]) == storeIndex.end())) {
                storeIndex[s[c]] = c;
                store.push_back(s[c]);
            } else if (it != store.end()) {
                store.erase(it);
            }
        }

        if (store.size() != 0) {
            return storeIndex[store[0]];
        }

        return -1;

    }
};

int main () {
    Solution sol = Solution();
    cout << sol.firstUniqChar("aadadaad") << endl;
}