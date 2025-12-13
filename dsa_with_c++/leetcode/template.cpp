#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        int luckyInt = -1;

        for (auto& p : freq) {
            if (p.first == p.second) {
                luckyInt = max(p.first, luckyInt);
            }
        }
        return luckyInt;
    }
};

int main() {
    Solution obj;

    vector<int> arr1 = {2, 2, 3, 4};
    cout << obj.findLucky(arr1) << endl; // Output: 2

    vector<int> arr2 = {1, 2, 2, 3, 3, 3};
    cout << obj.findLucky(arr2) << endl; // Output: 3

    vector<int> arr3 = {2, 2, 2, 3, 3};
    cout << obj.findLucky(arr3) << endl; // Output: -1

    return 0;
}

