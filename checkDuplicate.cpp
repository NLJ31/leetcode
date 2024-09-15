#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;


class Solution {
    unordered_map<int, bool> hashMap;
public:
    
    Solution()  {
        hashMap.reserve(10001);
    }

    bool containsDuplicate(vector<int>& nums) {
        for (auto &i : nums) {
            if (checkContent(i)) {
                return true;
            }
            add(i);
        }
        return false;
    }

    void add(int key) {
        hashMap[key] = true;
    }

    bool checkContent(int key) {
        return hashMap[key] == true;
    }
};



int main() {
    Solution sol = Solution();
    vector<int> nums = {1,5,-2,-4,0};

    cout << sol.containsDuplicate(nums);

    return 0;
}