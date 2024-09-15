#include <vector>

using namespace std;

// class MyHashSet {
    
//     vector<int> hashMap;

//     public:
//      MyHashSet() : hashMap(1000001, 0) {

//     }
    
//     int hash(int key) {
//         return key & 1000001;
//     }

//     void add(int key) {
//         int k = hash(key);
//         hashMap[k] = 1;
//     }
    
//     void remove(int key) {
//         int k = hash(key);
//         hashMap[k] = 0;
        
//     }
    
//     bool contains(int key) {
//         int k = hash(key);
//         return hashMap[k] == 1;
//     }
// };


class MyHashSet {
    
    vector<int> hashMap;

    public:
     MyHashSet() : hashMap(1000001, -1) {

    }

    void put(int key, int value) {
        hashMap[key] = value;
    }
    
    void remove(int key) {
        hashMap[key] = 0;
        
    }
    
    int get(int key) {
        return hashMap[key];
    }
};


int main() {
    MyHashSet* hash = new MyHashSet();
}