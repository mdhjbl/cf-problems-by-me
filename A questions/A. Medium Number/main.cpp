// Problem: 1760A - Medium Number
// Link: https://codeforces.com/problemset/problem/1760/A
// Author: mdhjbl
// Language: C++

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    for(int i =0 ; i< n ; i++){
        int arr[3];
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[j];
        }
        sort(arr , arr+3);
        cout << arr[1] << endl;

    }
}
