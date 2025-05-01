//WAP to convert a decimal into binary number.
#include<iostream>
using namespace std;
void decToBin(int n) {
    int binNum[32];
    int i = 0;
    while (n > 0) {
        binNum[i] = n % 2;
        n = n / 2;
        i++;}
    for (int j = i - 1; j >= 0; j--)
        cout << binNum[j];
}
int main() {
    int decNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;
    cout << "Binary representation is: ";
    decToBin(decNum);
    return 0;
}
