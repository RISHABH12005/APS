//WAP to sort the array and ask the choice from user for ascending/descending.
#include <iostream>
using namespace std;
void sortArray(int arr[], int n, bool acend) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (acend? arr[j] > arr[j+1] : arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);}
        }
    }
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];}
    char choice;
    cout << "Sort in ascending order (a) or descending order (d)? ";
    cin >> choice;
    bool acend = (choice == 'a');
    sortArray(arr, n, acend);
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";}
    cout << endl;
    return 0;
}
