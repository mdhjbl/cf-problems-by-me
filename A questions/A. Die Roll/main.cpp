// Problem: 9A - Die Roll
// Link: https://codeforces.com/problemset/problem/9/A
// Author: mdhjbl
// Language: C++

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int y, w;
    cin >> y >> w;
    int maxi = max(y, w);
    int num = 7 - maxi;
    int den = 6;
    int g = gcd(num, den); //b.m.m
    cout << num / g << "/" << den / g << "\n"; //simplize
    return 0;
}

//int main() {
//    int y , w ;
//    cin >> y >> w ;
//    int maxi = max(y , w);
//    int d = ((6 - maxi)+1);
//    if(d == 1 || d == 5){
//        cout << d << "/" << 6 ;
//    }else if(d == 6){
//        cout << 1 << "/" << 1;
//    }else if(d == 2 || d ==3){
//        cout << 1 << "/" << 6/d ;
//    }else{
//        cout << 2 << "/" << 3 ;
//    }
//}
