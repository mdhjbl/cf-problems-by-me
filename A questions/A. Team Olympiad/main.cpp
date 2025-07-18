#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> one, two, three;

    for (int i = 0; i < n; i++) {
        int skill;
        cin >> skill;

        if (skill == 1) {
            one.push_back(i + 1);
        } else if (skill == 2) {
            two.push_back(i + 1);
        } else if (skill == 3) {
            three.push_back(i + 1);
        }
    }

    int res = min(min(one.size(), two.size()), three.size());
    cout << res << endl;

    for (int i = 0; i < res; i++) {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }

    return 0;
}
