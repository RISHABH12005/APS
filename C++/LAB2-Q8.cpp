// WAP to find out nCr factor of given numbers.
// Note: nCr = n! /((n-r)!r!)
#include <iostream>
using namespace std;
int facto(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;}
    return f;
}
int nCr(int n, int r) {
    return facto(n) / (facto(n - r) * facto(r));
}
int main() {
    int n, r;
    cin >> n >> r;
    if (n >= r && n >= 0 && r >= 0) {
        cout << "nCr = " << nCr(n, r) << endl;
    } else {
      cout << "Invalid input\n";}
    return 0;
}
