class Solution {
public:
  int popcount(int x) {
    int count = 0;
    while (x > 0) {
      count += x & 1; // add 1 if last bit is set
      x >>= 1;        // shift right by 1 bit
    }
    return count;
  }

  int countDepth(int x) {
    int depth = 0;
    while (x != 1) {
      x = popcount(x);
      depth++;
    }
    return depth;
  }

  long long popcountDepth(long long n, int k) {
    long long result = 0;
    for (long long x = 1; x <= n; ++x) {
      if (countDepth((int)x) == k) {
        result++;
      }
    }
    return result;
  }
};
