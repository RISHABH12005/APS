//WAP to find out largest element of an array.
#include<iostream>
using namespace std;
int LE(int ar[], int n){
    int L = ar[0];
    for (int i = 1; i < n; i++) {
        if (ar[i] >L) {
            L = ar[i];
        }
    }
    return L;
}
int main() {
    int ar[] = {1,2,3,4,5};
    int n = 5;
    cout << "Largest element in the array is: " << LE(ar, n);
    return 0;
}
