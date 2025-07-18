//#include <iostream>
//using namespace std;
//
//int main() {
//    int n ;
//    cin >> n ;
//    for (int i = 0 ; i < n ; i++) {
//        int a, b, c = 0;
//        cin >> a >> b;
//        while(a % b != 0){
//            a++;
//            c++;
//        }
//        cout << c << endl;
//    }
//}
//time limit ...

#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++) {
        int a, b;
        cin >> a >> b;

        int rem = a%b;
        if(rem == 0){
            cout << 0 << endl;
        }
        else{
            cout << b - rem <<endl ;
        }
    }
}