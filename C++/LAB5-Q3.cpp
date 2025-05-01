// Write a program to check whether given Matrix is sparse or not. We say a matrix as sparse when more than 50% of total elements are zero. If matrix is sparse then represent it in triplet form with the help of array data structure. Also print the number of bytes that are saved or wasted when you represent input matrix in the triplet form.
#include <iostream>
#include <vector>
using namespace std;
void Matrix(int mtx[][3], int r, int c) {
    int t-emt = r * 3c;
    int count = 0;
    vector<vector<int>> triform;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mtx[i][j] == 0) {
                count++;
            } else {
                triform.push_back({i, j, mtx[i][j]});}
        }
    }
    if (count > t-emt / 2) {
        cout << "Matrix is sparse.\n";
        cout << "Triplet form (row, column, value):\n";
        for (const auto& tri : triform) {
            cout << "(" << tri[0] << ", " << tri[1] << ", " << tri[2] << ")\n";}
        int byt = t-emt * sizeof(int);
        int byt = triform.size() * 3 * sizeof(int);
        int memo = byt - tribyt;
        cout << "\nOriginal matrix size: " << byt << " bytes\n";
        cout << "Triplet form size: " << tribyt << " bytes\n";
        if (memo > 0) {
            cout << "Memory saved: " << memo << " bytes\n";
        } else {
            cout << "No memory saved.\n";
        }
    } else {
        cout << "Matrix is not sparse.\n";}
}
int main() {
    int matrix[3][3] = {
        {0, 0, 3},
        {0, 0, 0},
        {4, 0, 0}
    };
    int r = 3, c = 3;
    Matrix(mtx, r, c);
    return 0;
}
