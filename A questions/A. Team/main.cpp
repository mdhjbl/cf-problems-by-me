#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int arr [n][3];
    for(int i =0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }

    int c = 0;
    int curr = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(arr[i][j] == 1){
                curr++;
            }
        }
        if(curr >= 2){
            c++;
        }
        curr = 0 ;
    }

    cout << c ;
}

//second way
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    int c = 0;
//    for (int i = 0; i < n; i++) {
//        int a, b, c_;
//        cin >> a >> b >> c_;
//        if (a + b + c_ >= 2) {
//            c++;
//        }
//    }
//
//    cout << c;
//}
