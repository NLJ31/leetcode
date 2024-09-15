#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
    unordered_map<int, int> store;
    public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0 ; i< nums.size() ; ++i) {
            int remaining = target - nums[i];

            if (store.find(remaining) != store.end()) {
                return { store[remaining], i };
            }

            store.insert(make_pair(nums[i], i));
        }

        return {};
    }
};


int main() {
    Solution sol = Solution();

    vector<int> arr = {2,7,11,15};

}