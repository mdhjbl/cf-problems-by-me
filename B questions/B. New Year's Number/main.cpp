#include <iostream>
using namespace std ;

int main() {
    long long int n ;
    cin >> n ;
    for (int i =0 ; i< n ; i++){
        long long int num;
        cin >> num ;
        if(num%2021 == 0){
            cout << "YES" << endl;
        }else if(num % 2020 == 0){
            cout << "YES"<<endl;
        }else{
            int a = num % 2020;
            if(a <= num / 2020){
                cout << "YES"<<endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}
