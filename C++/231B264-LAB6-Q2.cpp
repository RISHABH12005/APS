//Use Rdm function by putting it into separate header (231B264-LAB6-Q1.h). WAP to implement the bubble sort and show the output of each pass.
#include <iostream>
#include "231B264-LAB6-Q1.h"
using namespace std;
void BS(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swp = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swp = true;}
        }
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";}
        cout << endl;
        if (!swp) break;}
}
int main() {
    int n = 5;
    int* arr = Rdm(n);
    cout << "Original arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    BS(arr, n);
    delete[] arr;
    return 0;
}
