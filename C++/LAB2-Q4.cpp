//WAP to multiply two numbers using addition.
#include <iostream>
using namespace std;
int add(int a, int b) {
    int d= 0;
    for (int i = 0; i < b; ++i) {
        d += a;}
    return d;
}
int main() {
    int a, b;
    cout << "Enter 2 No. ";
    cin >> a >> b;
    int c =add(a, b);
    cout << "The product of " << a << " & " << b << " is " <<c;
    return 0;
}
