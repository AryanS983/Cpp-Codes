#include<iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed Matrix:" << endl;
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
