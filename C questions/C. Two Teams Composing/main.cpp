#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            int skill;
            cin >> skill;
            freq[skill]++;
        }

        //the number of distinct skills
        int distinctCount = freq.size();
        int maxFreq = 0;

        //counting the max skills that are same
        //p.first = key & p.second = value
        for (auto &p : freq) {
            if (p.second > maxFreq) {
                maxFreq = p.second;
            }
        }

        int ans;

        if (distinctCount > maxFreq) {
            ans = min(distinctCount - 1, maxFreq);
        } else {
            ans = min(distinctCount, maxFreq - 1);
        }

        cout << ans << "\n";
    }
    return 0;
}
