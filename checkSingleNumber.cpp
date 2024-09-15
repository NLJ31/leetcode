#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
    unordered_map<int, bool> hashMap;

    public:

    Solution()  {
        hashMap.reserve(3001);
    }
    int singleNumber(vector<int>& nums) {
        for (auto &i : nums) {
            if (hashMap.find(i) != hashMap.end()) {
                hashMap.erase(i);
            } else {
                hashMap[i] = true;
            }
        }

        return hashMap.begin()->first;
    }

};