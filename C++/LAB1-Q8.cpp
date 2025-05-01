//WAP to find a word in given statement.
#include <iostream>
#include <string>
using namespace std;
bool findW(const string &S, const string &W) {
    return S.find(W) != string::npos;
    }
int main() {
    string S,W;
    cout << "Enter a statement: ";
    getline(cin,S);
    cout << "Enter the word to find: ";
    cin >>W;
    if (findW(S,W)) {
        cout << "The word '" <<W<< "' is found in the statement.";
    } else {
        cout << "The word '" <<W<< "' is not found in the statement.";}
    return 0;
}
