#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

unordered_set<int> storeValue;


vector<int> individualDigits(int n) {
    vector<int> res;
        while (n != 0) {
            res.push_back(n%10);
            n/=10;
        }
        
    return res;
}

int sumOfDigits(int n) {
    int res = 0;
    while (n != 0) {
        res+=((n%10) * (n%10));
        n/=10;
    }
        
    return res;
}

bool happyNumber(int n) {
    cout << n << endl;
    if ( n == 1) return true;

    int num = sumOfDigits(n);

    if (num == 1) return true;
    if(storeValue.count(num)) return false;

        storeValue.insert(num);
    return happyNumber(num);
}

int main () {

    // for (auto &i : individualDigits(12345678)) {
    //     cout << i << endl;
    // }

    // cout << sumOfDigits(78) << endl;
    cout << (happyNumber(18) == 1) << endl;
    // int n = 18;

    // cout << n%10 << endl;

    // n/=10;

    // cout << n%10 << endl;
    // n/=10;
    // cout << n << endl;
    return 0;
}