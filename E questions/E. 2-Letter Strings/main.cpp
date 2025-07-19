// Problem: E. 2-Letter Strings
// Link: https://codeforces.com/contest/1669/problem/E
// Author: mdhjbl
// Language: C++

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long result = 0;
        unordered_map<string, int> countMap;

        vector<string> strArr(n);
        for (int i = 0; i < n; ++i) {
            cin >> strArr[i];
        }

        for (int i = 0; i < n; ++i) {
            string s = strArr[i];

            for (char ch = 'a'; ch <= 'k'; ++ch) {
                if (ch == s[0]) continue;
                string temp = s;
                temp[0] = ch;
                result += countMap[temp];
            }

            for (char ch = 'a'; ch <= 'k'; ++ch) {
                if (ch == s[1]) continue;
                string temp = s;
                temp[1] = ch;
                result += countMap[temp];
            }

            countMap[s]++;
        }

        cout << result << '\n';
    }

    return 0;
}
