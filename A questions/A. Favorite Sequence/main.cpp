// Problem: 1462A - Favorite Sequence
// Link: https://codeforces.com/problemset/problem/1462/A
// Author: mdhjbl
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int l = 0, r = n - 1;

        while (l <= r) {
            cout << arr[l++] << ' ';
            if (l <= r) {
                cout << arr[r--] << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}
