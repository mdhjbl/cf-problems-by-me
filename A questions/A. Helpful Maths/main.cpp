#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string ph;
    cin >> ph;

    vector<int> numbers;
    for (int i = 0; i < ph.length(); i++) {
        if (isdigit(ph[i])) {
            numbers.push_back(ph[i] - '0');
        }
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << '+';
        }
    }
}
