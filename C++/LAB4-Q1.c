//Write a C program to reverse the elements of an array. https://www.hackerrank.com/challenges/reverse-array-c/problem
#include <stdio.h>
int main() {
//Write your code here.
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
//End
    return 0;
}
