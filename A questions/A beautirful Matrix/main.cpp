#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[5][5];
   for(int i =0 ; i< 5 ; i++){
       for(int j=0;j<5;j++){
           cin >> arr[i][j];
       }
   }

   int row,col;
    for(int i =0 ; i< 5 ; i++){
        for(int j=0;j<5;j++){
            if(arr [i][j] != 0){
                row = i;
                col = j;
            }
        }
    }

    int result = abs(2 - row) + abs(2 - col);
    cout << result ;
}
