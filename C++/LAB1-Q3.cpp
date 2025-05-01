//WAP to check whether the number is prime or not.
#include <iostream>
using namespace std;
bool Prime(int n) {
    if (n<= 1) {
        return false;}
    if (n== 2) {
        return true;}
    if (n% 2 == 0) {
        return false;}
    for (int i = 3; i * i <= n; i += 2) {
        if (n% i == 0) {
            return false;}
    }
    return true;
}
int main() {
    int n;
    cout <<"Enter a number: ";
    cin >>n;
    if (Prime(n)) {
        cout <<n<< " is a prime number.";}
        else {
        cout <<n<< " is not a prime number.";}
    return 0;
}
