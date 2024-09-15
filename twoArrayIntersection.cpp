#include <vector>
#include <unordered_set>

using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> unSet(nums1.begin(), nums1.end());
        vector<int> result;

        for (auto &i : nums2) {
            if (unSet.count(i)) {
                result.push_back(i);
            }
        }

        unordered_set<int> resSet(result.begin(), result.end());
        vector<int> finalResult(resSet.begin(), resSet.end());

        return finalResult;
    }
};