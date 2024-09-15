#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
    unordered_map<char, char> uniqueS, uniqueT;

    public:
    bool isIsomorphic(string s, string t) {

        for (int i = 0 ; i < s.length() ; i++) {

            if ((uniqueS.find(s[i]) != uniqueS.end() && uniqueS[s[i]] != t[i]) || (uniqueT.find(t[i]) != uniqueT.end() && uniqueT[t[i]] != s[i])) {
                return false;
            }

            uniqueS.insert(make_pair(s[i], t[i]));
            uniqueT.insert(make_pair(t[i], s[i]));
        }

        return true;
    }
};

int main() {
    Solution sol = Solution();

    // cout << sol.isIsomorphic("a", "a") << endl;
    // cout << sol.isIsomorphic("egg", "add") << endl;
    // cout << sol.isIsomorphic("foo", "bar") << endl;
    cout << sol.isIsomorphic("paper", "title") << endl;
}