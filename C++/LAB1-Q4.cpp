//WAP to calculate x^y where x and y are two integer numbers entered by the user. [do not use pow() function].
#include <iostream>
using namespace std;
int pow(int B, int E) {
    int a = 1;
    for (int i = 0; i < E; ++i) {
        a *= B;}
    return a;
}
int main() {
    int x, y;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (y): ";
    cin >> y;
    int a = pow(x, y);
    cout << x << " raised to the power of " << y << " is: " <<a;
    return 0;
}
