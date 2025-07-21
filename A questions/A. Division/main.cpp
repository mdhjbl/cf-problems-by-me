// Problem: A. Division?
// Link: https://codeforces.com/problemset/problem/1669/A
// Author: mdhjbl
// Language: C++

#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    for(int i =0 ; i< n ;  i++){
        int rate ;
        cin >> rate ;
        if(1900 <= rate){
            cout << "Division 1" << endl;
        }else if( 1600 <= rate && rate <= 1899){
            cout << "Division 2" << endl;
        }else if( 1400 <= rate && rate <= 1599){
            cout << "Division 3" << endl;
        }else{
            cout << "Division 4" << endl;
        }
    }
}
