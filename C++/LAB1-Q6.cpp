//WAP to find the reverse of given string.
#include <iostream>
#include <string>
using namespace std;
string reverseString(const string &str) {
    string reversedStr = str;
    int n = reversedStr.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(reversedStr[i], reversedStr[n - i - 1]);}
    return reversedStr;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string reversedStr = reverseString(str);
    cout << "The reversed string is: " << reversedStr << endl;
    return 0;
}
