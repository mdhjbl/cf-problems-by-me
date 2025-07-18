#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long int n , m , a , result;
    cin >> n >> m >> a;
    result = ((m + a - 1) / a) * ((n + a - 1) / a) ;
    cout <<  result ;
}
