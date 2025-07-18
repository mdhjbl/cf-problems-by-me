#include <iostream>
using namespace std;

int main() {
    int m , n;
    cin >> m >>n ;
    int res = 0;
    if(n%2 == 0){
        res = (n/2)*m;
    }else{
        if(m%2 == 0){
            res = ((n-1)/2)*m + (m/2);
        }else{
            res = ((n-1)/2)*m + ((m-1)/2);
        }
    }
    cout << res;
}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int m, n;
//    cin >> m >> n;
//    cout << (m * n) / 2;
//}

