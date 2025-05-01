//WAP to multiply two numbers using addition.
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int B2D(string b) {
    int d = 0;
    int l = b.length();
    for (int i = 0; i < l; ++i) {
        if (b[l - i - 1] == '1') {
            d += pow(2, i);}
    }
    return d;
}
int main() {
    string b;
    cout << "Enter a binary no. ";
    cin >> b;
    int d= B2D(b);
    cout << "The decimal equivalent of binary " << b<< " is " << d;
    return 0;
}
