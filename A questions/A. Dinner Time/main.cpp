// Problem: 2102A - Dinner Time
// Link: https://codeforces.com/problemset/problem/4/A
// Author: mdhjbl
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while (t--){
        int n , m , p , q ;
        cin >> n >> m >> p >> q;
        if (q * (n - p + 1) == m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

// n -> size of the array
// m -> total sum of all elements in the array
// p -> length of each subarray
// q -> sum of each subarray of length p

// The number of subarrays of length p in an array of size n is: (n - p + 1)

// Since each of those subarrays must sum to q,
// The total sum of all these overlapping subarrays is: q * (n - p + 1)

