#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < q; i++) {
            int arrtemp[n];
            for (int j = 0; j < n; j++) {
                arrtemp[j] = arr[j];
            }
            int l, r, k;
            cin >> l >> r >> k;
            for (int j = l - 1; j <= r - 1; j++) {
                arrtemp[j] = k;
            }
            long long c = 0;
            for (int j = 0; j < n; j++) {
                c += arrtemp[j];
            }
            if (c % 2 == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
