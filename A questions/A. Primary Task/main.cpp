#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string num;
        cin >> num;

        if (num.size() > 2 && num[0] == '1' && num[1] == '0') {
            string rest = num.substr(2); //remove 2 char from first

            if (rest[0] != '0') {
                int x = stoi(rest); //change it to number
                if (x >= 2) {
                    cout << "YES\n";
                    continue;
                }
            }
        }
        cout << "NO\n";
    }
}
