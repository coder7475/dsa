class Solution {
public:
  vector<string> partitionString(string s) {
    unordered_set<string> seen;
    vector<string> segments;
    string curr;
    for (char c : s) {
      curr += c;
      if (seen.count(curr) == 0) {
        segments.push_back(curr);
        seen.insert(curr);
        curr = "";
      }
    }
    if (!curr.empty())
      segments.push_back(curr);
    return segments;
  }
};
