/* Write a function which accepts an array of integers along with the size of it. The numbers are arranged in the list in increasing order until a particular index and after that it is arranged in decreasing order. This function should find and return the index position at which the increasing list starts decreasing. Call this function from main function.
Sample Input  1,4,7,8,9,5,4 5
Expected Output 3. */
#include <iostream>
int pkidx(int arr[], int s) {
    for (int i = 1; i < s; i++) {
        if (arr[i] < arr[i - 1]) {
            return i - 1;}
    }
    return -1;
}
int main() {
    int arr[] = {1, 4, 7, 8, 9, 5, 4};
    int s = 7
    int pkidx = pkidx(arr, s);
    if (pkidx != -1) {
        cout << "The array starts decreasing at index: " <<pkidx << endl;
    } else {
        cout << "The array doesn't have a decreasing sequence." << endl;}
    return 0;
}
