#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    std::string s;
    std::cin >> s;

    // Count characters
    int freq[26] = {0};
    for (char c : s) {
      freq[c - 'A']++;
    }

    std::string result;

    // Greedy rule to avoid forming "FFT" or "NTT"
    // 1. Place all characters except F/N/T first
    for (int i = 0; i < 26; ++i) {
      if (i == 'F' - 'A' || i == 'N' - 'A' || i == 'T' - 'A') continue;
      result += std::string(freq[i], 'A' + i);
    }

    // 2. Then safely arrange F, N, and T to avoid forming "FFT"/"NTT"
    // Idea: Don't allow "FF" or "NN" directly before a T
    // Best: Put all T's first, then all F/Ns

    result += std::string(freq['T' - 'A'], 'T');
    result += std::string(freq['F' - 'A'], 'F');
    result += std::string(freq['N' - 'A'], 'N');

    std::cout << result << "\n";
  }

  return 0;
}

