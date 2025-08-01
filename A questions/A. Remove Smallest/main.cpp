// Problem: 1399A - Remove Smallest
// Link: https://codeforces.com/problemset/problem/1399/A
// Author: mdhjbl
// Language: C++

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main() {
    int t ;
    cin >> t ;
    while (t--){
        int n ;
        cin >> n ;
        vector<int> arr(n);
        for(int i =0 ; i<n ; i++){
            cin >> arr[i];
        }
        sort(arr.begin() , arr.end());
        bool res = true ;
        for(int i = 0 ; i < n - 1 ; i++){
            if(arr[i+1] - arr[i] != 1 && arr[i+1] - arr[i] != 0){
                res = false;
                break;
            }
        }
        if(res){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl ;
        }

    }
}
