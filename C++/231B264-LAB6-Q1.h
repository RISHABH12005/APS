//WAP to implement a function Rdm(n) which returns an array of random numbers{between 0 to 99}, where n is the size of array. (Hint: use dynamic memory allocation concept)
#ifndef rdm
#define rdm
#include <cstdlib>
#include <ctime>
using namespace std;
int* Rdm(int n) {
    int* arr = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;}
    return arr;}
#endif
