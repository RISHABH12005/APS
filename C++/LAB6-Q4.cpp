// Use Rdm function by putting it into separate header file (231B264-LAB6-Q4.h). WAP to implement the insertion sort and show the output of each pass.
#include <iostream>
#include "231B264-LAB6-Q4.h"
using namespace std;
void IS(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;}
        arr[j + 1] = key;
        cout << "Pass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";}
        cout << endl;}
}
int main() {
    int n = 5;
    int* arr = Rdm(n);
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    IS(arr, n);
    delete[] arr;
    return 0;
}
