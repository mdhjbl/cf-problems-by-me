#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int firstOdd = -1, lastOdd = -1;
        int firstEven = -1, lastEven = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                if (firstEven == -1) firstEven = i;
                lastEven = i;
            } else {
                if (firstOdd == -1) firstOdd = i;
                lastOdd = i;
            }
        }

        int spanOdd  = (firstOdd  == -1 ? 0 : lastOdd  - firstOdd  + 1);
        int spanEven = (firstEven == -1 ? 0 : lastEven - firstEven + 1);

        int keep = max(spanOdd, spanEven);
        int ans = n - keep;
        cout << ans << "\n";
    }
    return 0;
}
