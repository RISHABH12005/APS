//WAP to create a dynamic array of user desired size and search an element in that array.
#include <iostream>
using namespace std;
int main() {
    int n, E;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];}
    cout << "Enter the element to search for: ";
    cin >>E;
    bool F= false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] ==E) {
            F= true;
            break;}
    }
    if (F) {
        cout << "Element " <<E<< " is found in the array.";}
        else {
        cout << "Element " <<E<< " is not found in the array.";}
    delete[] arr;
    return 0;
}
