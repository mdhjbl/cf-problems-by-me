// Problem: 275A - Lights Out
// Link: https://codeforces.com/problemset/problem/275/A
// Author: mdhjbl
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int clicks[3][3];
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            cin >> clicks[i][j];
        }
    }
    int arr[3][3];
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            arr[i][j] = 1;
        }
    }

    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {

            if (clicks[i][j] % 2 == 1) {

                arr[i][j] ^= 1;

                if (i - 1 >= 0) arr[i-1][j] ^= 1;

                if (i + 1 < 3) arr[i+1][j] ^= 1;

                if (j - 1 >= 0) arr[i][j-1] ^= 1;

                if (j + 1 < 3) arr[i][j+1] ^= 1;
            }
        }
    }
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
