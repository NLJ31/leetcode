#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
    vector<string> store;
    // unordered_map<string, int> store;
    int newMinimum = 100000;
    public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
     for (int i = 0 ; i < list1.size() ; i++) {
        auto it = find(list2.begin(), list2.end(), list1[i]);
        if (it != list2.end()) {
            int index = distance(list2.begin(), it);
            if ((i + index) == newMinimum) {
                store.push_back(list1[i]);
                // store.insert(make_pair(list1[i], i + index));
            } else if ((i + index) < newMinimum) {
                store.clear();
                store.push_back(list1[i]);
                // store.insert(make_pair(list1[i], i + index));
                newMinimum = (i + index);
            }
        }
     }
     return store;
    }      
};

int main() {
    Solution sol = Solution();
    vector<string> list1 = {"happy", "sad", "good"};
    vector<string> list2 = {"sad", "happy", "good"};

    vector<string> res = sol.findRestaurant(list1, list2);

    for (auto &i : res) {
        cout << i << endl;
    }
    return 0;
}