//WAP to implement the linear search. Use function concept, if element is found then return index number of element otherwise return -1.
#include <iostream>
using namespace std;
int Search(int arr[], int n, int t) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            return i;}
    }
    return -1;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    int t;
    cout << "Enter the target element: ";
    cin >> t;
    int r = Search(arr, n, t);
    if (r != -1) {
        cout << "Element found at index " << r;
    } else {
        cout << "Element not found in the array";}
    return 0;
}
