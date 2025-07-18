#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (a == "++X" || a == "X++") {
            x++;
        } else if (a == "--X" || a == "X--") {
            x--;
        }
    }
    cout << x;
    return 0;
}
