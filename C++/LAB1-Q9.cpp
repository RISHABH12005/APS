//WAP to concatenate two strings using pointer.
#include <iostream>
using namespace std;
void C(char* str1, const char* str2) {
    while (*str1) {
        str1++;}
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;}
    *str1 = '\0';
}
int main() {
    char str1[100], str2[50];
    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    cout << "Enter the second string: ";
    cin.getline(str2, 50);
    C(str1, str2);
    cout << "Concatenated string: " << str1;
    return 0;
}
