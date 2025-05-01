// WAP to display lower triangular matrix of a given n by n size matrix entered by user
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    int mtx[n][n];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> mtx[i][j];}
    }
    cout << "Lower triangular matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j) {
                cout << mtx[i][j] << " ";}
            else {
                cout << "0 ";}
        }
        cout << endl;}
    return 0;
}
