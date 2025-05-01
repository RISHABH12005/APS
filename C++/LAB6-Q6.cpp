// Use Rdm function by putting it into separate header file (231B264-LAB6-Q1.h). WAP to implement the merge sort and show the output of each pass.
#include <iostream>
#include "231B264-LAB6-Q1.h"
using namespace std;
void mrg(int arr[], int l, int m, int r, int n, int &p) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int* L = new int[n1];
    int* R = new int[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;}
        k++;}
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;}
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;}
    cout << "Pass " << ++p << ": ";
    for (int p = 0; p < n; p++) {
        cout << arr[p] << " ";}
    cout << endl;
    delete[] L;
    delete[] R;
}
void MS(int arr[], int l, int r, int n, int &p) {
    if (l < r) {
        int m = l + (r - l) / 2;
        MS(arr, l, m, n, p);
        MS(arr, m + 1, r, n, p);
        merge(arr, l, m, r, n, p);}
}
int main() {
    int n = 5;
    int* arr = Rdm(n);
    cout << "Original arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    int p = 0;
    MS(arr, 0, n - 1, n, p);
    delete[] arr;
    return 0;
}
