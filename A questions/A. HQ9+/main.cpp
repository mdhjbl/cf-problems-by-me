// Problem: 133A - HQ9+
// Link: https://codeforces.com/problemset/problem/133/A
// Author: mdhjbl
// Language: C++
#include <iostream>
using namespace std;

int main() {
    string p;
    cin >> p;
    int c = 0;
    for(int i = 0; i < p.length(); i++) {
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            c = 1;
            break;
        }
    }
    if(c == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
