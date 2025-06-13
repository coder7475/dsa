#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int ones = k;
        int zeros = n - k;
        string res = "";

        // Alternate 1s and 0s as evenly as possible
        while (ones > 0 || zeros > 0) {
            if ((res.empty() || res.back() == '0') && ones > 0) {
                res += '1';
                ones--;
            } else if (zeros > 0) {
                res += '0';
                zeros--;
            } else if (ones > 0) {
                res += '1';
                ones--;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
