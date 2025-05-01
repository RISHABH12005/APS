//Write a program to implement binary search algorithm. Assume user will enter the sorted array. https://www.hackerrank.com/contests/launchpad-1-winter-challenge/challenges/binary-search-basic
#include <iostream>
using namespace std;
//Write your code here.
int BS(int arr[], int n, int K) {
    int L= 0;
    int H = n - 1;
    while (L<=H) {
        int M=(L+H)/2;
        if (arr[M]==K) {
            return M;}
             else if (arr[M]<K) {
             L=M+1;}
             else {
             H=M-1;}
    }
    return -1;
}
//End
int main() {
//Write your code here.
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    int K;
    cout << "Enter the key to search: ";
    cin >>K;
    int result =BS(arr, n,K);
    if (result != -1) {
        cout << "Element found at index " << result;
    } else {
        cout << "Element not found";}
//End
    return 0;
}
