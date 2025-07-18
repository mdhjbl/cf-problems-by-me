#include <iostream>
using namespace std;

int main() {
    string num ;
    int c = 0 ;
    cin >> num ;
    for (int i = 0 ; i < num.length() ; i++){
        if(num[i] == '4' || num[i] == '7'){
            c++;
        }
    }
    if(c == 7 || c == 4){
        cout << "YES" ;
    }else{
        cout << "NO";
    }
}
