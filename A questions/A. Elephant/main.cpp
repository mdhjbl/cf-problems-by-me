#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> dp;

int steps(int n) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        return -1;
    }
    if (dp[n] != -2) {
        return dp[n];
    }

    int ans = INT_MAX;
    for (int i = 1; i <= 5; i++) {
        int val = steps(n - i);
        if (val != -1) {
            ans = min(ans, val + 1);
        }
    }

    if (ans == INT_MAX) {
        return dp[n] = -1;
    }
    return dp[n] = ans;
}

int main() {
    int n;
    cin >> n;
    dp.assign(n + 1, -2);
    int ans = steps(n);
    cout<< ans;

}












//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    int steps = n / 5;
//    if (n % 5 != 0) {
//        steps++;
//    }
//
//    cout << steps << endl;
//    return 0;
//}
