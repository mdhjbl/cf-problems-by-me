#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long min_a = *min_element(a.begin(), a.end());
        bool possible = false;

        for (int i = 0; i < n; i++) {
            if (a[i] <= min_a + k) {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "Tom\n";
        else
            cout << "Jerry\n";
    }

    return 0;
}
