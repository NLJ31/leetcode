#include <vector>
#include <cmath> 
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
    public:
    unordered_map<int, int> store;
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0 ; i < nums.size(); i++) {
            if (store.find(nums[i]) != store.end()) {
                cout << i << endl;
                cout << store[nums[i]] << endl;
                if (abs(i - store[nums[i]]) <= k) return true;
            }
            cout << "Loop" << i << endl;
            store[nums[i]] = i;
        }
        return false;
    }
};

int main () {
    vector<int> arr {1,2,3,1,2,3};
    Solution sol = Solution();
    cout << sol.containsNearbyDuplicate(arr, 2) << endl;

}