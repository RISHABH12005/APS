/* Write a time efficient program for finding the element which appears maximum number of times in the array.
Sample input: 2, 4, 5, 6, 8, 9, 10, 13, 2, 3, 2
Sample output: 2 [as 2 is coming three times] */
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int emt(vector<int>& arr) {
    unordered_map<int, int> f;
    int max = 0;
    int emt;
    for (int n : arr) {
        f[n]++;
        if (f[n] > max) {
            max = f[n];
            emt = num;}
    }
    return emt;
}
int main() {
    vector<int> arr = {2, 4, 5, 6, 8, 9, 10, 13, 2, 3, 2};
    int result = emt(arr);
    cout << "Most frequent element: " << result << endl;
    return 0;
}
