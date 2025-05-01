// WAP to delete an element from an array, use search algorithm to find the index number of given number; if element to be deleted is not found then print “Error: element not found”.
#include <iostream>
using namespace std;
int src(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;}
    }
    return -1;
}
void dltemt(int arr[], int& n, int idx) {
    for (int i = idx; i < n - 1; i++) {
        arr[i] = arr[i + 1];}
    n--;
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    int key;
    cin >> key;
    int idx = search(arr, n, key);
    if (idx == -1) {
        cout << "Error: element not found\n";
    } else {
        dltemt(arr, n, index);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";}
        cout << endl;}
    return 0;
}
