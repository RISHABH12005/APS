// Use Rdm function by putting it into separate header file (231B264-LAB6-Q1.h). WAP to implement the quick sort and show the output of each pass.
#include <iostream>
#include "231B264-LAB6-Q1.h"
using namespace std;
void arr(int arr[], int n, int p) {
    cout << "Pass " << p << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
}
int parti(int arr[], int l, int h, int n, int &p) {
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);}
    }
    swap(arr[i + 1], arr[h]);
    arr(arr, n, ++p);
    return i + 1;
}
void QS(int arr[], int l, int h, int n, int &p) {
    if (l < h) {
        int pi = parti(arr, l, h, n, p);
        QS(arr, l, pi - 1, n, p);
        QS(arr, pi + 1, high, n, p);}
}
int main() {
    int n = 5;
    int* arr = Rdm(n);
    cout << "Original arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    int p = 0;
    QS(arr, 0, n - 1, n, p);
    delete[] arr;
    return 0;
}
