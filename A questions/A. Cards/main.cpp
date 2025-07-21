// Problem: 4A - Watermelon
// Link: https://codeforces.com/problemset/problem/1220/A
// Author: mdhjbl
// Language: C++

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    cin >> s;

    int count_n = 0, count_z = 0;

    for (char c : s) {
        if (c == 'n') count_n++;
        else if (c == 'z') count_z++;
    }

    for (int i = 0; i < count_n; i++)
        cout << 1 << ' ';
    for (int i = 0; i < count_z; i++)
        cout << 0 << ' ';

    cout << endl;
    return 0;
}

