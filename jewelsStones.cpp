#include <string>
#include <unordered_map>

using namespace std;

class Solution {
    public:
    unordered_map<char, int> store;
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        for (char c : stones) {
            if (jewels.find(c) != string::npos) {
                count ++;
            }
            // store[c]++;
        }

        // for (char c : jewels) {
        //     count+=store[c];
        // }   

        return count;
    }
};