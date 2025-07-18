#include <iostream>
using namespace std;

int main() {
    int n , c = 0;
    string stones ;
    cin >> n >> stones ;
    for (int i =0; i < stones.length() - 1 ; i++){
        if(stones[i] == stones[i+1]){
            c++;
        }
    }
    cout << c ;
}
