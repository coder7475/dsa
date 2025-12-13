class Solution {
public:
  vector<int> findMissingElements(vector<int> &nums) {
    unordered_set<int> hashSet;
    int smallest = 1, largest = 100;

    for (int num : nums) {
      hashSet.insert(num);
      smallest = min(num, smallest);
      largest = max(num, largest);
    }

    vector<int> res;

    for (int i = smallest; i <= largest; i++) {
      if (hashSet.find(i) == hashSet.end()) {
        res.push_back(i);
      }
    }

    return res;
  }
};
