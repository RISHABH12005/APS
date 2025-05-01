//Use Rdm function by putting it into separate header file (231B264-LAB6-Q1.h). WAP to implement the selection sort and show the output of each pass.
#include <iostream>
#include "231B264-LAB6-Q1.h"
using namespace std;
void SS(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;}
        }
        swap(arr[i], arr[min]);
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";}
        cout << endl;}
}
int main() {
    int n = 5;
    int* arr = Rdm(n)
    cout << "Original arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    SS(arr, n);
    delete[] arr;
    return 0;
}
