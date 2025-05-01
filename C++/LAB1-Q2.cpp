//WAP to search an element in array.
#include <iostream>
using namespace std;
int SE(int ar[], int n, int A) {
    for (int i = 0; i < n; i++) {
        if (ar[i] == A) {
            return i;
        }
    }
    return -1;
}
int main() {
    int ar[] = {1,2,3,4,5};
    int n = 5;
    int A = 10;
    int B = SE(ar, n, A);
    if (B!= -1) {
        cout << "Element " <<A << " found at index " <<B <<endl;
    } else {
        cout << "Element " <<A << " not found in the array" <<endl;
    }
    return 0;
}
