#include <unordered_set>

using namespace std;


class Solution {
    unordered_set<int> storeValue;

    public:
    bool isHappy(int n) {
        if ( n == 1) return true;

        int num = sumOfDigits(n);

        if (num == 1) return true;

        if(storeValue.count(num)) return false;

        storeValue.insert(num);
        
        return isHappy(num);
    }

    int sumOfDigits(int n) {
        int res = 0;
        while (n != 0) {
            res+=((n%10) * (n%10));
            n/=10;
        }
        return res;
    }
};