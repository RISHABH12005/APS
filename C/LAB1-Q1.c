//WAP to find out largest element of an array.
#include <stdio.h>
int main() {
    int ar[] = {12, 34, 54, 2, 3};
    int L = ar[0];
    for (int i = 1; i <5; i++) {
        if (ar[i] >L) {
            L=ar[i];}
    }
    printf("Largest element: %d\n",L);
    return 0;
}
