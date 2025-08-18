#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;

        long long dist = y - x;
        long long speed = a + b;

        if (dist % speed == 0) {
            cout << dist / speed << endl;
        } else {
            cout << -1 << endl;
        }
    }
}


//#include <iostream>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        long long x, y, a, b;
//        cin >> x >> y >> a >> b;
//
//        bool meet = false;
//        long long seconds = 0;
//
//        while (x < y) {
//            if (x == y) {
//                meet = true;
//                break;
//            }
//            x = x + a;
//            y = y - b;
//            seconds++;
//            if (x == y) {
//                meet = true;
//                break;
//            }
//        }
//
//        if (meet) cout << seconds << endl;
//        else cout << -1 << endl;
//    }
//}
