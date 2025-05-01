//WAP to replace a character by another character in a string. Take both the choices from the user.
#include <iostream>
#include <string>
using namespace std;
void replaceChar(string &str,char old,char news) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == old);{
            str[i] = news;}
    }
}
int main() {
    string str;
    char old, news;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to replace: ";
    cin >> old;
    cout << "Enter the new character: ";
    cin >> news;
    replaceChar(str, old, news);
    cout << "The new string is: " << str << endl;
    return 0;
}
