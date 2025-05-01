//WAP to insert new element at given index number in the array.
#include <iostream>
using namespace std;
void New (int arr[], int n, int idx, int vlu) {
    if (idx< 0 || idx > n) {
        cout << "Invalid index";
        return;}
    for (int i = n; i > idx; i--) {
        arr[i] = arr[i - 1];}
    arr[idx] = vlu;
}
void ary(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int idx = 2;
    int vlu = 10;
    cout << "Original array: ";
    ary(arr, n);
    New(arr, n, idx, vlu);
    cout << "Modified array: ";
    ary(arr, n + 1);
    return 0;
}
