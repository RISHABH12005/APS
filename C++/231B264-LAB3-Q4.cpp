// WAP for checking whether there are any duplicated elements in the array or not?
#include <iostream>
using namespace std;
bool dup(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;}
        }
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    if (dup(arr, n)) {
        cout << "Duplicates found\n";
    } else {
        cout << "No duplicates\n";}
    return 0;
}
