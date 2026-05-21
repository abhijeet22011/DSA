#include<iostream>
using namespace std;

void printSpiralMatrix(int n) {
    int matrix[n][n];
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        // Traverse from left to right
        for (int c = left; c <= right; c++) {
            matrix[top][c] = value++;
        }
        top++;

        // Traverse from top to bottom
        for (int r = top; r <= bottom; r++) {
            matrix[r][right] = value++;
        }
        right--;

        // Traverse from right to left
        for (int c = right; c >= left; c--) {
            matrix[bottom][c] = value++;
        }
        bottom--;

        // Traverse from bottom to top
        for (int r = bottom; r >= top; r--) {
            matrix[r][left] = value++;
        }
        left++;
    }

    // Print the spiral matrix
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cout << matrix[r][c] << "\t";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the size of the spiral matrix: ";
    cin >> n;
    printSpiralMatrix(n);
    return 0;
}