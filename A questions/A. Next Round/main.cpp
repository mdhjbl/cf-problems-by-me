#include <iostream>
using namespace std;

int main() {
    int n , k, c = 0;
    cin >> n >> k;
    int arr[n];
    for(int i =0 ; i< n;i++){
        cin >> arr[i];
    }
    int a = arr[k - 1];
    for(int i =0 ; i<n ; i++){
        if(arr[i] >= a && arr[i]>0){
            c++;
        }
    }
    cout << c ;


}

